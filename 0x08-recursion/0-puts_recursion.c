#include "main.h"
/**
 * _puts_recursion - function prints a string using recursion
 * @s: function takes an argument of a string pointer
 * Return: function has a void return
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(++s);
}
