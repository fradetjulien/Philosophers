##
## EPITECH PROJECT, 2018
## philosopher
## File description:
## Makefile
##

CC	= gcc

RM	= rm -f

CFLAGS	= -g -W -Wall -Wextra -pthread

CFLAGS	+= -I include/

NAME	= philo

SRCS	= src/check_arguments.c		\
	  src/eat.c			\
	  src/execution.c		\
	  src/flag_help.c		\
	  src/init_philosophe.c		\
	  src/parser.c			\
	  src/rest.c			\
	  src/think.c			\
	  src/create_philo.c		\
	  main.c

OBJS	= $(SRCS:.c=.o)

$(NAME): $(OBJS)
	$(CC) -o $(NAME) $(OBJS) $(CFLAGS) libriceferee.so

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
