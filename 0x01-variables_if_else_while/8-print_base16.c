#include <stdio.h>
/**
 * main - Entry point
 * function prints all base 16 numbers in lowercase
 * Return: Always 0 (success)
 */
int main(void)
{
	int n = 0;

	char hex = 'a';

	while (n <= 9)
	{
		putchar('0' + n);
		n++;
	}

	while (hex <= 'f')
	{
		putchar(hex);
		hex++;
	}
	putchar('\n');
	return (0);
}
