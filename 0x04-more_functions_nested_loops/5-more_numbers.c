#include "main.h"
/**
 * more_numbers - function prints 0 to 14 ten times
 * function has no arguments
 * function has a void return
 */
void more_numbers(void)
{
	int a = 0;

	while (a <= 9)
	{
		int b = 0;

		while (b <= 14)
		{
			if (b > 9)
			{
				_putchar('0' + (b / 10));
			}
			_putchar('0' + (b % 10));
			b++;
		}
		_putchar('\n');
		a++;
	}
}
