# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: arabefam <arabefam@student.42antananari    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/02 11:43:31 by arabefam          #+#    #+#              #
#    Updated: 2025/03/12 12:07:17 by arabefam         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	phonebook
CXX			=	c++
CXXFLAGS	=	-Wall -Werror -Wextra
SRCS		=	Contact.cpp PhoneBook.cpp main.cpp
OBJS		=	$(SRCS:.cpp=.o)

all			:	$(NAME)

$(NAME)		:	$(OBJS)
			$(CXX) $(CXXFLAGS) $(SRCS) -o $(NAME)

clean		:
			rm -f $(OBJS)

fclean		:	clean
			rm -f $(NAME)

re			:	fclean all
