#include "main.h"
/**
 * print_number - function prints an integer
 * @n: function takes an integer parameter
 * Return: function has a void return
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10)
		print_number(n / 10);
	_putchar('0' + n % 10);
}
