#include "main.h"
/**
 * main - begining of program
 * @argc: number of arguments
 * @argv: passed strings
 * Return: 0 when success
 */
int main(int argc, char **argv)
{
	int y;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	y = _change(atoi(argv[1]));
	printf("%d\n", y);
	return (0);
}
/**
 * _change - working function
 * @i: passed first
 * Return: always recursion
 */
int _change(int i)
{
	if (i < 0)
		return (0);
	if (i >= 25)
		return (i / 25 + _change(i % 25));
	if (i >= 10 && i < 25)
		return (i / 10 + _change(i % 10));
	if (i >= 5 && i < 10)
		return (i / 5 + _change(i % 5));
	if (i >= 2 && i < 5)
		return (i / 2 + _change(i % 2));
	else
		return (i);
}
