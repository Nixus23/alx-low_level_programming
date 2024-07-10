#include "main.h"
/**
 * _pow_recursion - function returns x raised to the power of y
 * @x: int x, value to raise
 * @y: int y, int value to power by
 * Return: The function returns an int value
 */
int _pow_recursion(int x, int y)
{
	int sol;

	if (y == 0)
		return (1);
	if (y < 0)
		return (-1);

	if (y != 0)
	{
		sol = (x * _pow_recursion(x, y - 1));
	}
	return (sol);
}
