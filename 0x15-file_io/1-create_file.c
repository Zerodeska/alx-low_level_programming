#include "main.h"
/**
 * create_file - creation of file function
 * @filename: name of the file
 * @text_content: content of the file to add
 * Return: 1 or -1
*/
int create_file(const char *filename, char *text_content)
{
	int op, wr, i = 0;

	if (filename == NULL)
		return (-1);
	op = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (op == -1)
		return (-1);
	while (text_content[i] != '\0')
		i++;
	wr = write(op, text_content, i);
	if (wr == -1)
		return (-1);
	return (1);
}
