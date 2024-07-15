#include "main.h"
/**
 * _strdup - function returns a pointer to a newly allocated space in memory
 * @str: function has a pointer to a string as a parameter
 * Return: the function returns a char pointer
 */
char *_strdup(char *str)
{
	unsigned int i = 0;
	char *play;

	if (str == NULL)
	{
		return (NULL);
	}
	play = malloc(sizeof(char) * (*str) + 1);

	if (play == NULL)
	{
		return (NULL);
	}

	while (*str)
	{
		play[i++] = *str++;
	}
	play[i] = '\0';

	return (play);

}
