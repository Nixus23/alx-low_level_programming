#include "main.h"
/**
 * print_line - function prints a line
 * @n: function takes an integer parameter
 * Return: the function has a void return
 */
void print_line(int n)
{
	int m = 0;

	if (n > 0)
	{
		while (m < n)
			_putchar('_');
		m++;
	}
	_putchar('\n');
}
