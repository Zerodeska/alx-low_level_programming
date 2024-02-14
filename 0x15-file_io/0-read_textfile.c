#include "main.h"

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fp;
	size_t b, a;
	char buffer[1024];

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