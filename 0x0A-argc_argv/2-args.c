#include <stdio.h>
/**
 * main - function entry point
 * @argc: function parameter that counts the arguments
 * @argv: function parameter that stores the string arguments
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
