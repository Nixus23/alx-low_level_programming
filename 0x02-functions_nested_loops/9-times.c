#include <stdio.h>
int main ()
{
	int i = 1, j;

	while (i <= 9)
	{
		printf("%i   ",i);
		j = 1;

		while (j <= 9)
		{
			printf("%i    ",i*j);
			j++;
		}
		printf("\n");
		i++;
	
	}

	return (0);
}
