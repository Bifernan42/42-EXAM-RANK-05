NAME=prog
SRCS=$(wildcard *.cpp)
INC=$(wildcard *.hpp)
CC=c++
CFL= -Wall -Wextra -Werror -std=c++98
OBJS= $(SRCS:.cpp=.o)

all : $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(CFL) $(OBJS) -o $(NAME)

%.o : %.cpp $(INC)
	$(CC) $(CFL) -c $< -o $@

clean :
	@rm -f $(OBJS)

fclean : clean
	@rm -f $(NAME)

re : fclean all

end : fclean
	@rm -f main.cpp
	@mv Makefile ..

class :
	../script.sh

.PHONY: clean fclean all re end class
