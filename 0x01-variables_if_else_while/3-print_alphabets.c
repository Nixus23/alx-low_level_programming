#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch = 'a', uh = 'A';

	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	while (uh <= 'Z')
	{
		putchar(uh);
		uh++;
	}
	putchar('\n');
	return (0);
}
