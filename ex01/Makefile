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
