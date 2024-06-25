#include "main.h"
/**
 * _abs - function to find the absolute value of an int
 * @int: takesa an integer as its parameter
 * Return: returns an integer
 */
int _abs(int n)
{
	/*int n;*/

	if (n >= 1)
	{
		int result = n;

		return (result);
	}
	else if (n == 0)
	{
		int result = 0;

		return (result);
	}
	else
	{
		int result = ((n * n) / n);

		return (result);
	}

}
