/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsharame <hsharame@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 17:48:49 by hsharame          #+#    #+#             */
/*   Updated: 2025/02/27 12:29:27 by hsharame         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap    Louise("Louise");
    Louise.displayStatus();
    Louise.attack("Jordan");
    Louise.takeDamage(2);
    Louise.attack("Paul");
    Louise.attack("Lea");
    Louise.attack("Georges");
    Louise.displayStatus();
    Louise.takeDamage(10);
    Louise.attack("Georges");
    Louise.beRepaired(3);
    Louise.attack("Georges");
    Louise.displayStatus();
    return 0;
}
