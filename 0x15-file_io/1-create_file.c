#include "main.h"
/**
 * create_file - function creates a file
 * @filename: the name of the file
 * @text_content: a string to write to the file
 * Return: the function returns an int
 */
int create_file(const char *filename, char *text_content)
{
	int op, wr, str_len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[str_len])
		str_len++;
	}
	op = open(filename, O_RDWR | O_CREAT | O_TRUNC, 600);
	wr = write(op, text_content, str_len);
	if (op == -1 || wr == -1)
		return (-1);
	close(op);
	return (1);
}
