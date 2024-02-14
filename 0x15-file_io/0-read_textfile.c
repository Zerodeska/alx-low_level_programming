#include "main.h"

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fp, b;
	char *buffer;

	if (filename == NULL || letters == 0)
		return (0);
	fp = open(filename, O_RDONLY);
	if (fp == -1)
		return (0);
	buffer = malloc((letters + 1) * sizeof(char));
	if (buffer == NULL)
		return (0);
	b = read(fp, &buffer, letters);
	b = write(STDOUT_FILENO, &buffer, b);
	close(fp);
	return (b);
}