#include "main.h"
/**
 * print_binary - function prints the binary of a decimal number
 * @n: function has an int as the parameter
 * Return: function has a void return
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	_putchar('0' + (n & 1));
}
