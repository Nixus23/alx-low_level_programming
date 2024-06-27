#include "main.h"
/**
 * print_numbers - function prints numbers to 9
 * no function arguments
 * Return: has a void return
 */
void print_numbers(void)
{
	int a = 0;

	while (a <= 9)
	{
		_putchar('0' + a);
		a++;
	}
	_putchar('\n');
}
