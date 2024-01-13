#include "main.h"

/**
 * main - multiplication of numbers
 *
 * @argc: number of arguments
 *
 * @argv: passed strings
 *
 * Return: always 0
 */

int main(int argc, char **argv)
{
	int i, y;

	if (argc != 3)
	{
		printf("Error\n");
		return (0);
	}
	else
	{
	i = atoi(argv[1]);
	y = atoi(argv[2]);
	printf("%d\n", i * y);
	return (0);
	}
}
