#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @a: function parameter int
 * Return: returns an integer value
 */
int print_last_digit(int a)
{
	if (a < 0)
	{
		a = a * -1;
	}
	int last = (a % 10);

	_putchar('0' + last);
	return (last);

}
