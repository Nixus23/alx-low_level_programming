#include "main.h"
/**
 * _puts - function prints a string followed by a new line
 * @str: function takes a string parameter
 * Return: function has a void return
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);
	_putchar('\n');
}
