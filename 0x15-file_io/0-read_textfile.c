#include "main.h"
/**
 * read_textfile - it reads string from text file
 * @filename: name of the file
 * @letters: number of letters to print
 * Return: number of printed letters
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fp;
	size_t b, a;
	char buffer[2048];

	if (filename == NULL || letters == 0)
		return (0);
	fp = open(filename, O_RDONLY);
	if (fp == -1)
		return (0);
	b = read(fp, buffer, letters);
	a = write(STDOUT_FILENO, buffer, b);
	close(fp);
	return (a);
}
