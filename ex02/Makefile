
# ************************************************************************** #
#                                                                            #
#                      Makefile for D02                                      #
#                      Created: 2022/10/09 17:11:01                          #
#                      Made by : yelgharo <yelgharo@student.1337.ma>         #
#                                                                            #
# ************************************************************************** #

NAME = a.out

CLANG = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

FILES = main.cpp Fixed.cpp

OFILES = $(FILES:.cpp=.o)

all : $(NAME)

$(NAME) : $(OFILES) 
	${CLANG} $^ -o $@ 

%.o : %.cpp  Fixed.hpp
	$(CLANG)  -o $@ -c $< ${FLAGS}

clean : 
	@rm -rf ${OFILES}

fclean : clean
	@rm -rf ${NAME}

re : fclean all

.PHONY : all clean fclean re

# ************************************************************************** #
