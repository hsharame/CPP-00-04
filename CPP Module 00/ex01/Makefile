NAME = phonebook
CC = c++
RM = rm -f
CFLAGS = -Wall -Wextra -Werror
FLAG98 = -std=c++98
SRCS = main.cpp PhoneBook.cpp Contact.cpp 
HEADERS = PhoneBook.hpp Contact.hpp
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
		$(CC) $(CFLAGS) $(FLAG98) -o $(NAME) $(OBJS) 

%.o: %.cpp
		$(CC) $(CFLAGS) -c $< -o $@ 

clean:
		$(RM) $(OBJS)

fclean: clean
		$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
