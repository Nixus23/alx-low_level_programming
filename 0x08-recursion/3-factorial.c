#include "main.h"
/**
 * factorial - function returns the factorial of a number
 * @n: the function takes an integer parameter
 * Return: function returns an integer
 */
int factorial(int n)
{
	if (n <= -1)
		return (-1);
	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
