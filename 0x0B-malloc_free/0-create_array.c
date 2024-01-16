#include "main.h"
/**
 * create_array - creates an array
 * @size: passed size of array
 * @c: passed char
 * Return: the string made
*/
char *create_array(unsigned int size, char c)
{
char *p;
unsigned int i = 0;

p = malloc(sizeof(char) * size);
if (size == 0)
return NULL;
while (i < size)
{    
p[i] = c;
i++;
}
return p;
}