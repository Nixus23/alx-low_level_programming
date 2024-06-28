#include "main.h"
/**
 * print_line - function prints a line
 * @n: function takes an integer parameter
 * Return: the function has a void return
 */
void print_line(int n)
{
	int l;

	if (n >= 1 )
	{
		for (l = 1; l < n; l++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
