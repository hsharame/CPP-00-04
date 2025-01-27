NAME = phonebook
CC = c++
RM = rm -f
CFLAGS = -Wall -Wextra -Werror
FLAG98 = -std=c++98
SRCS = PhoneBook.cpp Contact.cpp main.cpp
HEADERS = PhoneBook.hpp Contact.hpp
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
		$(CC) $(CFLAGS) -o $(NAME) $(OBJS) $(HEADERS)

%.o: %.cpp
		$(CC) $(CFLAGS) -c $< -o $@ $(HEADERS)

clean:
		$(RM) $(OBJS)

fclean: clean
		$(RM) $(NAME)

re: fclean all

./PHONY: all clean fclean re
