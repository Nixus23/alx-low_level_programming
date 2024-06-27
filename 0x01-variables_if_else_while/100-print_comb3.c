#include <stdio.h>
/**
 * main - Entry point
 * function prints different possible combinations of two digit numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 0, m;

	while (n <= 9)
	{
		m = n + 1;
		while (m < 10)
		{
			putchar('0' + n);
			putchar('0' + m);

			if (m == 8 && n == 9)
				break;

			putchar(',');
			putchar(' ');
			m++;
		}
		n++;
	}
	putchar('\n');
	return (0);
}
