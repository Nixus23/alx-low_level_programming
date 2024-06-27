/*custom function to check digits*/
#include "main.h"
/**
 * _isdigit - function checks for single digits
 * @c: int function parameter
 *
 * Return: returns 1 for true and 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
		return (1);
	else
		return (0);
}
