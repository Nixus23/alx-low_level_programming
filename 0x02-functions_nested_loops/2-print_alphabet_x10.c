#include "main.h"
/**
 * print_alphabet_x10 - function prints alphabet 10 times
 * Returns void
 */

void print_alphabet_x10(void)
{
	int i = 0;

	while (i <= 9)
	{
		char ch = 'a';

		while (ch <= 'z')
		{
			_putchar('ch');
			ch++;
		}
		_putchar('\n');
		i++;
	}
}
