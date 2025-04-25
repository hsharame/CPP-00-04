NAME = brainz
CXX = c++
RM = rm -f
CXXFLAGS = -Wall -Wextra -Werror
FLAG98 = -std=c++98
SRCS = main.cpp Zombie.cpp randomChump.cpp newZombie.cpp
HEADERS = Zombie.hpp
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
		$(CXX) $(CXXFLAGS) $(FLAG98) -o $(NAME) $(OBJS) 

%.o: %.cpp
		$(CXX) $(CXXFLAGS) -c $< -o $@ 

clean:
		$(RM) $(OBJS)

fclean: clean
		$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
