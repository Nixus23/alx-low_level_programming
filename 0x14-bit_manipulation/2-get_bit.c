#include "main.h"
/**
 * get_bit - function returns the value of a bit at a given index
 * @n: the int to be convert to binary first
 * @index: the position of the bit to check value
 * Return: function returns an int
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if ((n & (1 << index)) == 0)
		return (0);
	return (1);
}
