NAME	:=	megaphone

STDFLAGS	:=	-std=c++98

CC	:=	c++
CPPFLAGS	:=	-Wall -Wextra -Werror $(STDFLAGS)

SRCS	:=	megaphone.cpp
OBJS	:=	$(SRCS:.cpp=.o)

all	:	$(NAME)

$(NAME)	:	$(OBJS)
		$(CC) $(CPPFLAGS) $^ -o $@

$(OBJS)	:	$(SRCS) Makefile
		$(CC) $(CPPFLAGS) -c $< -o $@

clean	:
		rm -rf $(OBJS)

fclean	:	clean
		rm -rf $(NAME)

re	:
		$(MAKE) fclean
		$(MAKE) all

.PHONY	:	all clean fclean re
