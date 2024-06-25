#include "main.h"
/**
 * _isalpha - function to check if letter is lower or upper case
 * @c: function argument
 * Return: function returns 1 while true and 0 and while false
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);

}
