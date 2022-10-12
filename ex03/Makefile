
# **************************************************************************** #
#                                                                              #
#                      Makefile for D02                                        #
#                      Created: 2022/10/10 02:13:01                            #
#                      Made by : yelgharo <yelgharo@student.1337.ma>           #
#                                                                              #
# **************************************************************************** #

NAME = a.out

CLANG = c++

FLAGS = -Wall -Wextra -Werror -std=c++98

FILES = main.cpp Fixed.cpp Point.cpp  bsp.cpp

OFILES = $(FILES:.cpp=.o)

LIBS = Fixed.hpp Point.hpp

all : $(NAME)

$(NAME) : $(OFILES) 
	${CLANG} $^ -o $@ 

%.o : %.cpp  $(LIBS)
	$(CLANG)  -o $@ -c $< ${FLAGS}

clean : 
	@rm -rf ${OFILES}

fclean : clean
	@rm -rf ${NAME}

re : fclean all

.PHONY : all clean fclean re


# **************************************************************************** #
