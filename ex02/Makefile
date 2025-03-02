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
