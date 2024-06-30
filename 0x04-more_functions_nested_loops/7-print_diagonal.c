#include "main.h"
/**
 * print_diagonal - function prints a diagonal line
 * @n: function takes an int as the parameter
 * Return: function has a void return
 */
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				if ((i - j) == 0)
				{
					_putchar('\\');
				}
				else
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
