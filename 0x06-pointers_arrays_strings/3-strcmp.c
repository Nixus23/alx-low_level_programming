#include "main.h"
/**
 * _strcmp - function compares two strings if they are identical
 * @s1: char pointer to the first string
 * @s2: char pointer to the second string
 * Return: the function returns an integer value
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0, j = 0;

	while (s1[i] != '\0' && s2[j] != '\0')
	{
		if ((s1[i] - s2[j]) == 0)
			return (0);
		else if ((s1[i] - s2[j]) < 0)
			return (-1);
		else if ((s1[i] - s2[j]) > 0)
			return (1);
		i++;
		j++;
	}
	if (s1[i] != '\0' && s2[j] == '\0')
		return (1);
	else if (s2[j] != '\0' && s1[i] == '\0')
		return (-1);
}
