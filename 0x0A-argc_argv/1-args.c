#include "main.h"

/**
 * main - prints the number of arguments
 * 
 * @argc: number of arguments
 *
 * @argv: passed strings
 *
 * Return: always 0
 */

int main(int argc, char **argv)
{
	char *s = argv[0];
	
	s++;
	printf("%d\n" ,argc - 1);
	return 0;
}
