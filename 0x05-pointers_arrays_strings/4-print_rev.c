#include "main.h"
/**
 * print_rev - function prints the reverse of a string
 * @s: function takes a string to a pointer
 * Return: the function has a void return
 */
void print_rev(char *s)
{
	char temp;
	char *start, *end;

	end = s;

	while (*end != '\0')
	{
		end++;
	}
	end--;

	start = s;

	while (start < end)
	{
		temp = *start;
		start = end;
		*end = temp;

		start++;
		end--;
	}

}
