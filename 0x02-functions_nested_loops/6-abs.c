#include "main.h"
/**
 * _abs - function to find the absolute value of an int
 * @d: takesa an integer as its parameter
 * Return: returns an integer
 */
int _abs(int d)
{

	if (int d >= 1)
	{
		int result = d;

		return (result);
	}
	else if (int d == 0)
	{
		int result = 0;

		return (result);
	}
	else if (int d >= -1)
	{
		int result = -d;

		return (result);
	}

}
