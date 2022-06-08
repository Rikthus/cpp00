NAME	:=	phonebook

STDF	:=	-std=c++98

CC	:=	c++;
CPPF	:=	-Wall -Wextra -Werror $(STDF)

SRCS	:=	phonebook.cpp
OBJS	:=	$(SRCS:.cpp=.o)
INCS	:=	phonebook.hpp

all	:	$(NAME)

$(NAME)	:	$(OBJS)
		$(CC) $(CPPF) $^ -o $@

$(OBJS	:	$(SRCS) $(INCS) Makefile
		$(CC) $(CPPF) -I $(INCS) -c $< -o $@

clean	:
		rm -rf $(OBJS)

fclean	:	clean
		rm -rf $(NAME)

re	:
		$(MAKE) fclean
		$(MAKE) all

.PHONY	:	all clean fclean re
