NAME = banque
CC = c++
RM = rm -f
CFLAGS = -Wall -Wextra -Werror
FLAG98 = -std=c++98
SRCS =  Account.cpp tests.cpp
HEADERS = Account.hpp
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
		$(CC) $(CFLAGS) -o $(NAME) $(OBJS) 

clean:
		$(RM) $(OBJS)

fclean: clean
		$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
