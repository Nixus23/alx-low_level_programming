#include "main.h"
/**
 * puts2 - function prints the characters of a string
 * @str: function has a char pointer parameter
 * Return: the function has a void return
 */
void puts2(char *str)
{
	int i, length = 0;

	while (str[i++])
		length++;
	for (i = 0; i < length; i += 2)
		_putchar(str[i]);
	_putchar('\n');
}
