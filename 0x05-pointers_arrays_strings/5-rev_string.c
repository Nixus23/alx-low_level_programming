#include "main.h"
/**
 * rev_string - function reverses a string
 * @s: function has a the parameter of a string pointer
 * Return: the function has a void return
 */
void rev_string(char *s)
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

