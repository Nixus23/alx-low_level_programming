#include "main.h"
/**
 * append_text_to_file - function appends text at the end of a file
 * @filename: the pointer to the filename
 * @text_content: the text to append to the file
 * Return: function returns an int
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int op, wr, str_len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[str_len])
			str_len++;
	}
	op = open(filename, O_WRONLY | O_APPEND, 664);
	wr = write(op, text_content, str_len);

	if (op == -1 || wr == -1)
	{
		return (-1);
	}
	close(op);
	return (1);
}
