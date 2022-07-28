# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jchauvet <jchauvet@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/11 08:22:57 by jchauvet          #+#    #+#              #
#    Updated: 2022/07/26 11:13:37 by jchauvet         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS =	Harl.cpp \
		main.cpp

INCLUDES = includes

CXX = c++

NAME = harlFilter

CXXFLAGS = -Wall -Wextra -Werror -I ${INCLUDES} -std=c++98

OBJS = ${SRCS:.cpp=.o}

all:${NAME}

${NAME}: ${OBJS}
	${CXX} ${CXXFLAGS} ${OBJS} -o ${NAME}

clean:
	rm -rf ${OBJS}

fclean: clean
	rm -rf ${NAME}

re: fclean all

.PHONY: all clean fclean re
