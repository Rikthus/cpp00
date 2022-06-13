NAME	:=	phonebook

STDF	:=	-std=c++98

CC	:=	c++
CPPF	:=	-Wall -Wextra -Werror $(STDF)

DIR_SRCS	:=	sources
DIR_INCS	:=	includes
DIR_OBJS	:=	.objs

LST_SRCS	:=	PhoneBook.class.cpp \
				Contact.class.cpp \
				main.cpp

LST_INCS	:=	PhoneBook.class.hpp \
				Contact.class.hpp

LST_OBJS	:=	$(LST_SRCS:.cpp=.o)

SRCS	:=	$(addprefix $(DIR_SRCS)/,$(LST_SRCS))
INCS	:=	$(addprefix $(DIR_INCS)/,$(LST_INCS))
OBJS	:=	$(addprefix $(DIR_OBJS)/,$(LST_OBJS))

all	:	$(NAME)

$(NAME)	:	$(OBJS)
			$(CC) $(CPPF) $^ -o $@

$(DIR_OBJS)/%.o	:	$(DIR_SRCS)/%.cpp $(INCS) Makefile | $(DIR_OBJS)
					$(CC) $(CPPF) -I $(DIR_INCS) -c $< -o $@

$(DIR_OBJS)	:
				mkdir -p $@

clean	:
			rm -rf $(OBJS)

fclean	:	clean
			rm -rf $(NAME)

re	:
		$(MAKE) fclean
		$(MAKE) all

.PHONY	:	all clean fclean re
