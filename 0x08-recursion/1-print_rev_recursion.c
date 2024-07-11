#include "main.h"
/**
 * _print_rev_recursion - function prints a string in reverse
 * @s: function takes a pointer to a string as a parameter
 * Return: function has a void return
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
