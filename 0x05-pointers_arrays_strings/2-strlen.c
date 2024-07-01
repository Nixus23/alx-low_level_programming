#include "main.h"
/**
 * _strlen - function returns the length of a string
 * @s: function takes the char parameter s
 * Return: function returns an integer value
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s++)
		len++;

	return (len);
}
