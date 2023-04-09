CC = gcc

CFLAGS = -Wall -Werror -Wextra -pedantic -std=gnu89

RM = rm -rf

BETTY = betty $(SRC)

SRC0 = 	0-print_dlistint.c 0-main.c

NAME0 = 0-test

SRC1 = 	1-dlistint_len.c 1-main.c

NAME1 = 1-test

SRC2 = 	2-add_dnodeint.c 0-print_dlistint.c 2-main.c

NAME2 = 2-test

SRC3 = 	3-add_dnodeint_end.c 0-print_dlistint.c 3-main.c

NAME3 = 3-test

SRC4 = 	4-free_dlistint.c 3-add_dnodeint_end.c 0-print_dlistint.c 4-main.c

NAME4 = 4-test

SRC5 = 5-main.c 3-add_dnodeint_end.c 0-print_dlistint.c 4-free_dlistint.c 5-get_dnodeint.c 

NAME5 = 5-test

SRC6 =  3-add_dnodeint_end.c 4-free_dlistint.c 6-sum_dlistint.c 6-main.c

NAME6 = 6-test


all:	0 1 2 3 4 5 6

0:
	$(BETTY) $(SRC0)
	$(CC) $(CFLAGS)	$(SRC0) -o $(NAME0)

1:
	$(BETTY) $(SRC1)
	$(CC) $(CFLAGS)	$(SRC1) -o $(NAME1)
2:
	$(BETTY) $(SRC2)
	$(CC) $(CFLAGS) $(SRC2) -o $(NAME2)
3:
	$(BETTY) $(SRC3)
	$(CC) $(CFLAGS) $(SRC3) -o $(NAME3)
4:
	$(BETTY) $(SRC4)
	$(CC) $(CFLAGS) $(SRC4) -o $(NAME4)
5:
	$(BETTY) $(SRC5)
	$(CC) $(CFLAGS) $(SRC5) -o $(NAME5)

6:
	$(BETTY) $(SRC6)
	$(CC) $(CFLAGS) $(SRC6) -o $(NAME6)

clean:
	$(RM) *~ \#*\# \.\#* \
        $(NAME)

re: clean all
