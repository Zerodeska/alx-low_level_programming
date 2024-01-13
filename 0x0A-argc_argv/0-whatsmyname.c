#include "main.h"

/**
 * main - prints the file name
 *
 * @argc: number of strings
 *
 * @argv: passed strings
 *
 * Return: always 0
 */

int main(int argc,char **argv)
{
	int x;

	x = argc + 1;
	x++;
	printf("%s\n" ,*argv);
	return (0);
}
