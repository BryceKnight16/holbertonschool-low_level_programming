CC = gcc

CFLAGS = -Wall -Werror -Wextra -pedantic -std=gnu89

RM = rm -rf

BETTY = betty $(SRC)

SRC0 = 	0-print_list.c 0-main.c

NAME0 = 0-test

SRC1 = 	1-list_len.c 1-main.c

NAME1 = 1-test

SRC2 = 	2-add_node.c 0-print_list.c 2-main.c

NAME2 = 2-test

SRC3 = 	3-add_node_end.c 0-print_list.c 3-main.c

NAME3 = 3-test

SRC4 = 	4-free_list.c 3-add_node_end.c 0-print_list.c 4-main.c

NAME4 = 4-test

all:	0 1 2 3 4

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



clean:
	$(RM) *~ \#*\# \.\#* \
        $(NAME)

re: clean all
