#include <stdio.h>
/**
 * main - Entry point
 * function prints possible combinations of single numbers
 * Return: Always 0 (success)
 */
int main(void)
{
	int num = 0;

	while (num <= 9)
	{
		putchar('0' + num);

		if (num == 9)
			break;

		putchar(',');
		putchar(' ');
		num++;
	}
	putchar('\n');
	return (0);
}
