#include <stdio.h>

int main (void)
{
	int a;
	printf("Enter a number \n");
	scanf("%i", &a);

	//int length;

	if (a > 0)
	{
		for (int length = 1;length < a;length++)
		{
			putchar('_');
		}

	}
	putchar('_');

	return (0);
}
