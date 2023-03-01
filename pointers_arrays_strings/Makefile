CC = gcc
RM = rm -f
CFLAGS = -Wall -pedantic -Werror -Wextra -std=gnu89
BETTY = betty

SRC0 = 	0-main.c\
	0-reset_to_98.c

OBJ0 = 	$(SRC:.c=.0)
NAME0 =  0-98

SRC1 =	1-main.c\
	1-swap.c

OBJ1 =  $(SRC:.c=.0)
NAME1 =  1-swap

SRC2 =	2-main.c\
	2-strlen.c\


OBJ2 =	$(SRC:.c=.0)
NAME2 =	2-strlen

SRC3 = 	3-main.c\
	3-puts.c\
	_putchar.c

OBJ3 = 	$(SRC:.c=.0)
NAME3 =	3-puts

SRC4 =	4-main.c\
	4-print_rev.c\
	_putchar.c

OBJ4 =	$(SRC:.c=.0)
NAME4 = 4-print_rev







all: 0 1 2 3 4

0: 	$(OBJ0)
	$(BETTY) $(SRC0)
	$(CC) $(CFLAGS) $(SRC0) -o $(NAME0)

1:	$(OBJ1)
	$(BETTY) $(SRC1)
	$(CC) $(CFLAGS) $(SRC1) -o $(NAME1)

2:	$(OBJ2)
	$(BETTY) $(SRC2)
	$(CC) $(CFLAGS) $(SRC2) -o $(NAME2)

3: 	$(OBJ3)
	$(BETTY) $(SRC3)
	$(CC) $(CFLAGS) $(SRC3) -o $(NAME3)

4:	$(OBJ4)
	$(BETTY) $(SRC4)
	$(CC) $(CFLAGS) $(SRC4) -o $(NAME4)

clean:
	$(RM) *~ \#*\# \#* \
	$(NAME0)$(NAME1)$(NAME2)$(NAME3)$(NAME4)

fclean: 	clean clean

re: 	oclean all
