#include <stdio.h>

int main(int argc, char **argv)
{
	int i;

	i = 0;
        while(i <= argc)
	{
		printf("%s\n", (argv[i]));
		break;
	}
	    return(0);
}
