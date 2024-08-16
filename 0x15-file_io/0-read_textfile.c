#include "main.h"
/**
 * read_textfile - function reads a text file
 * @filename: the name of the file
 * @letters: the number of letters to read and print
 * Return: function returns an integer
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int op, re, wr;
	char *buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
		return (0);
	op = open(filename, O_RDONLY);
	re = read(op, buffer, letters);
	wr = write(1, buffer, re);

	if (op == -1 || re == -1 || wr == -1)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(op);
	return (wr);
}
