#include <stdio.h>

void main()
{
	char tab[3][4];

	tab[0][0] = 'A';
	tab[0][1] = 'B';
	tab[0][2] = 'C';
	tab[0][3] = '0';

	tab[1][0] = 'D';
	tab[1][1] = 'E';
	tab[1][2] = 'F';
	tab[1][3] = '1';

	tab[2][0] = 'G';
	tab[2][1] = 'H';
	tab[2][2] = 'I';
	tab[2][3] = '2';

/*
	char tab[3][4] = {
		{'A', 'B', 'C', '\0'},
		{'D', 'E', 'F', '\0'},
		{'G', 'H', 'I', '\0'}
	};
*/
/*
	char *tab[3];
	tab[0] = "ABC";
	tab[1] = "DEF";
	tab[2] = "GHI";
*/

	int row;
	int col;

	row = 0;
	while (row <= 2)
	{
		col = 0;
		while (col <= 3)
		{
			printf("this is the char: %c, address: %p\n", tab[row][col], &tab[row][col]);
			col = col + 1;
		}
		row = row + 1;
		putchar('\n');
	}
}
