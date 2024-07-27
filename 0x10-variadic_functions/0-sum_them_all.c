#include "variadic_functions.h"
/**
 * sum_them_all - function sums up all arguments
 * @n: the first argument parameter
 * Return: the function returns an int of the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list count;

	if (n == 0)
		return (0);

	va_start(count, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(count, int);
	}
	va_end(count);
	return (sum);
}
