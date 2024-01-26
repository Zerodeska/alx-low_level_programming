#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>


int main(int argc, char **argv)
{
	int (*p)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit (98);
	}
	p = get_op_func(argv[2]);
	if (p == NULL || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit (99);
	}
	if ((argv[2][0] == '/' || argv[2][0] == '%') && atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit (100);
	}
	printf("%d\n", p(atoi(argv[1]), atoi(argv[3])));
	return 0;
}
