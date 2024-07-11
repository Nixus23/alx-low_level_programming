#include "main.h"
/**
 * _strlen_recursion - print the length of a string using recursion
 * @s: function has string pointer parameter
 * Return: function returns an int
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
