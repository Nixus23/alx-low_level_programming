#include <stdio.h>

int main ()
{
	int i = 0;

	while (i <= 9)
	{
		putchar('0' + (i/10));
		i++;
	}
	return (0);
}
