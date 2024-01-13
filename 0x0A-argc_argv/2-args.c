#include "main.h"

/**
 * main - prints all passed arguments
 *
 * @argc: number of passed arguments
 *
 * @argv: passed strings
 *
 * Return: always 0
 */

int main(int argc, char **argv)
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
