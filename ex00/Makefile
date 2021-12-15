NAME	= megaphone

SRCS	= megaphone.cpp

OBJS	= $(SRCS:.cpp=.o)

CPP		= clang++

FLAGS	= -Wall -Wextra -Werror

RM		= rm -f

.cpp.o:
			$(CPP) $(FLAGS) -c $< -o $(<:.cpp=.o)

$(NAME):	$(OBJS)
			$(CPP) $(FLAGS) -o $(NAME) $(OBJS)

all:		$(NAME)

clean:		
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

.PHONY:		all clean fclean re