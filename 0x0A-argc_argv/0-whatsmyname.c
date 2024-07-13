#include <stdio.h>
/**
 * main - function entry point
 * @argc: function parameter to count arguments
 * @argv: function parameter to store the passed string arguments
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
