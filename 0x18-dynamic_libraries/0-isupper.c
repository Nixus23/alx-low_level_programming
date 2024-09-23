#include "main.h"
/**
 * _isupper - function checks for uppercase characters
 * @c: function int parameter
 * Return: returns 1 if true 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
