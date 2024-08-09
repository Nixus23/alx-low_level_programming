#include "main.h"
/**
 * set_bit - function sets the value of a bit to 1 at the given index
 * @n: a pointer to the int
 * @index: the position to set the bit
 * Return: the function returns an int
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	*n ^= (1 << index);

	return (1);
}
