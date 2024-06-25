/* user function to check for lowercase characters */
#include "main.h"
/**
 * _islower() function checks if the argument is a lowercase alphabet
 * fuction takes argument int @c as its parameter
 * Returns an integer 1 for success 0 for fail
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
