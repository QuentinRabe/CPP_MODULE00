# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: arabefam <arabefam@student.42antananari    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/12 12:07:28 by arabefam          #+#    #+#              #
#    Updated: 2025/03/12 12:10:30 by arabefam         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	account
CXX			=	c++
CXXFLAGS	=	-Wall -Werror -Wextra
SRCS		=	tests.cpp Account.cpp
OBJS		=	$(SRCS:.cpp=.o)

all			:	$(NAME)

$(NAME)		:	$(OBJS)
			$(CXX) $(CXXFLAGS) $(SRCS) -o $(NAME)

clean		:
			rm -f $(OBJS)

fclean		:	clean
			rm -f $(NAME)

re			:	fclean all
