#include <stdio.h>
/**
 * main - Entry point
 * function prints possible combinations of single numbers
 * Return: Always 0 (success)
 */
int main(void)
{
	int num = 0;

	while (num <= 8)
	{
		putchar('0' + num);
		putchar(',');
		putchar(' ');
		num++;
	}
	putchar('0' + 9);
	return (0);
}
