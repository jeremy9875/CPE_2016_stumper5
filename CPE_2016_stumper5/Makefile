##
## Makefile for Makefile in /home/jeremy.elkaim/CPE_2016_stumper5
## 
## Made by jeremy elkaim
## Login   <jeremy.elkaim@epitech.net>
## 
## Started on  Thu May 18 14:14:41 2017 jeremy elkaim
## Last update Thu May 18 15:53:41 2017 Filliat Etienne
##

NAME	= minicut

CC	= gcc -g3

SRC	= src/read.c	\
	  src/str.c	\
	  src/str_2.c	\
	  src/parser.c	\
	  src/main.c	\
	  src/my_calc.c

RM	= rm -rf

CFLAGS	+= -W -Wall
CFLAGS	+= -I include/

OBJ	= $(SRC:.c=.o)

TMP	= $(SRC:.c=.c~)

all:  	$(NAME)

$(NAME):	$(OBJ)
		$(CC) -o $(NAME) $(SRC) $(CFLAGS)

clean:
	$(RM) $(OBJ)
	$(RM) $(TMP)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
