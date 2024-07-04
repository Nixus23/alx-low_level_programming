#include "main.h"
/**
 * reverse_array - function reverses the content of an array of integers
 * @a: the pointer to the array
 * @n: the number of elements in the array
 * Return: the function has a void return
 */
void reverse_array(int *a, int n)
{
	int i, temp = 0;

	for (i = 0; i < (n / 2); i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp
	}
}
