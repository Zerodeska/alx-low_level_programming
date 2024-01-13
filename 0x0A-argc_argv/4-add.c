#include "main.h"

/**
 * main - the addition of multiple numbers
 *
 * @argc: number of nums
 *
 * @argv: passed string
 *
 * Return: always 0
 */

int main(int argc, char **argv)
{
	int sum = 0;
	int i = 1, x, j = 0;
	char *h;

	while (i < argc)
	{
		h = argv[i];
		j = 0;
		while (h[j] != '\0')
		{
			if (!isdigit(h[j]))
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		x = atoi(argv[i]);
		sum  = sum + x;
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
