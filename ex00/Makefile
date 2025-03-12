# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: arabefam <arabefam@student.42antananari    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/02 11:43:23 by arabefam          #+#    #+#              #
#    Updated: 2025/03/12 11:47:46 by arabefam         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	megaphone
CXX			=	c++
CXXFLAGS	=	-Wall -Werror -Wextra
SRCS		=	megaphone.cpp
OBJS		=	$(SRCS:.cpp=.o)

all			:	$(NAME)

$(NAME)		:	$(OBJS)
			$(CXX) $(CXXFLAGS) $(SRCS) -o $(NAME)

clean		:
			rm -f $(OBJS)

fclean		:	clean
			rm -f $(NAME)

re			:	fclean all
