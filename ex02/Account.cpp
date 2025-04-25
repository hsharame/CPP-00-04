/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsharame <hsharame@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 12:35:53 by hsharame          #+#    #+#             */
/*   Updated: 2025/01/28 15:32:16 by hsharame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>
#include <iomanip>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit) : _amount(initial_deposit)
{
	this->_accountIndex = Account::_nbAccounts;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	Account::_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";amount:" 
		<< this->_amount << ";created" << std::endl;
	Account::_nbAccounts++;
	Account::_totalAmount += initial_deposit;
}

Account::~Account(void)
{
	Account::_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";amount:" 
		<< this->_amount << ";closed" << std::endl;
	Account::_nbAccounts--;
}

int	Account::getNbAccounts( void )
{
	return Account::_nbAccounts;
}

int	Account::getTotalAmount( void )
{
	return Account::_totalAmount;
}

int	Account::getNbDeposits( void )
{
	return Account::_totalNbDeposits;
}

int	Account::getNbWithdrawals( void )
{
	return Account::_totalNbWithdrawals;
}

void	Account::displayAccountsInfos( void )
{
	Account::_displayTimestamp();
	std::cout << " accounts:" << Account::_nbAccounts << ";total:"
		<< Account::_totalAmount << ";deposits:" << Account::_totalNbDeposits
		<< ";withdrawals:" << Account::_totalNbWithdrawals << std::endl;
}

void	Account::makeDeposit( int deposit )
{
	Account::_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";p_amount:" 
		<< this->_amount << ";deposit:" << deposit;
	this->_amount += deposit;
	this->_nbDeposits++;
	std::cout << ";amount:" << this->_amount << ";nb_deposits:"
		<< this->_nbDeposits << std::endl;
	Account::_totalNbDeposits++;
	Account::_totalAmount += deposit;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	Account::_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";p_amount:" 
		<< this->_amount << ";withdrawal:";
	if (withdrawal > this->_amount)
	{
		std::cout << "refused" << std::endl;
		return (false);
	}
	this->_amount -= withdrawal; 
	this->_nbWithdrawals++;
	std::cout << withdrawal << ";amount:" << this->_amount
		<< ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
	Account::_totalNbWithdrawals++;
	Account::_totalAmount -= withdrawal;
	return (true);
}

int		Account::checkAmount( void ) const
{
	return this->_amount;
}

void	Account::displayStatus( void ) const
{
	Account::_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";amount:"
		<< this->_amount << ";deposits:" << this->_nbDeposits 
		<< ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

void	Account::_displayTimestamp( void )
{
	time_t	now = time(NULL);
	std::tm	*local = std::localtime(&now);
	if (local)
	{
		char	buffer[18];
		std::strftime(buffer, sizeof(buffer), "[%Y%m%d_%H%M%S]", local);
		std::cout << buffer;
	}
}
