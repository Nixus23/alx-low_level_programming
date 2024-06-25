#include "main.h"
/**
 * print_alphabet - prints the alphabet in lower case
 *
 * Return: no return type as it is void
 */

void print_alphabet(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
