#include "main.h"
/**
 * times_table - function prints the 9 multiplacation table
 * function has no parameters
 * Return: function has a void return
 */
void times_table(void)
{
	int i, j, prod;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			prod = i * j;
			if (prod > 9)
				_putchar('0' + (prod / 10));
			_putchar('0' + (prod % 10));
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}
}

