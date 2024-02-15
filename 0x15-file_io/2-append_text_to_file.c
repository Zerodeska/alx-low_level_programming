#include "main.h"
/**
 * append_text_to_file - it appends text from the user
 * @filename: name of the file
 * @text_content: test to append
 * Return: 1 when sucsess
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fp, wr, i = 0;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	while (text_content[i] != '\0')
		i++;
	fp = open(filename, O_WRONLY | O_APPEND);
	if (fp == -1)
		return (-1);
	wr = write(fp, text_content, i);
	if (wr == -1)
	{
		return (-1);
		close(fp);
	}
	close(fp);
	return (1);
}
