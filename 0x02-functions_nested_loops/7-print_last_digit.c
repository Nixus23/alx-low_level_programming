#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @a: function parameter int
 * Return: returns an integer value
 */
int print_last_digit(int a)
{
	int last;

	last = a % 10;

	if (a <= -1)
	{
		last = last * -1;
	}
	_putchar('0' + last);
	return (last);

}
