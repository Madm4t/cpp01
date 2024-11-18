NAME		= Zombie

CPP			= c++
CPPFLAGS	= -Wall -Wextra -Werror -std=c++17

SRCS		= main.cpp Zombie.cpp zombieHorde.cpp
OBJS		= $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CPP) $(CPPFLAGS) -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re