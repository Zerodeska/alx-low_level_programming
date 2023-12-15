#include <stdio.h> 

/*
 * main - the starting point of executing
 *
 * Return: 0 when executed
 */

int main(void)
{
	int i;
	char c = 'a';
	char new_line = '\n';

	for (i = 0 ; i < 27 ; i++)
	{
		putchar(c);
		c++;
	}
	putchar(new_line);
	return 0;
}
