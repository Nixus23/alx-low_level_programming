#include "main.h"
/**
 * print_most_numbers - function prints single digit numbers except 2 and 4
 * function has no arguments
 * Return: function has a void return
 */
void print_most_numbers(void)
{
	int a = 0;

	while (a != 2 && a != 4)
	{
		_putchar('0' + a);
	}
	_putchar('\n');

}
