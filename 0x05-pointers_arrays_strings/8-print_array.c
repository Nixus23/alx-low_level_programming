#include "main.h"
/**
 * function prints the n elements of an array
 * @a: function has a pointer to an array
 * @n: function has a parameter n of the array elements
 * Return: the function has a void return
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i ++)
	{
		printf("%d, ",a[i]);
		if (i == n - 1)
			break;
	}
	printf("\n");
}
