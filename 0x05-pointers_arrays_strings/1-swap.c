#include "main.h"
/**
 * swap_int - function swaps two integers
 * @a: first int parameter
 * @b: second int parameter
 * Return: function has a void return
 */
void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;

	*b = temp;
}
