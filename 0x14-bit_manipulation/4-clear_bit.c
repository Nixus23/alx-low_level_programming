#include "main.h"
/**
 * clear_bit - function sets value of a bit to 0 at an index
 * @n: pointer to the int 
 * @index: the position of the bit to set
 * Return: the function returns an int
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	*n &= ~(1 << index);

	return (1);
}
