##
## Makefile for Makefile in /home/jeremy.elkaim/CPE_2016_stumper1
## 
## Made by jeremy elkaim
## Login   <jeremy.elkaim@epitech.net>
## 
## Started on  Thu Apr 20 14:35:54 2017 jeremy elkaim
## Last update Thu Apr 20 15:54:41 2017 Filliat Etienne
##

CC	= gcc

NAME	= tail

RM	= rm -rf

FLAGS	= -W -Wall

SRC	=	src/main.c	\
		src/str_fct.c

OBJ	= $(SRC:.c=.o)

TMP	= $(SRC:.c=.c~)

all:	$(NAME)

$(NAME):$(OBJ)
	$(CC) $(SRC) -o $(NAME) $(INCLUDE)
clean:
	$(RM) $(OBJ)
	$(RM) $(TMP)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
