#include <stdio.h>
#include <stdlib.h>
/**
 * main - function entry point
 * @argc: function parameter that counts the arguments
 * @argv: function parameter that stores the string values of the argument
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	int sum = 0, row, column;

	if (argc < 1)
	{
		printf("0\n");
	}

	for (column = 1; column < argc; column++)
	{
		for (row = 0; argv[column][row]; row++)
		{
			if (argv[column][row] < '0' || argv[column][row] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[column]);
	}
	printf("%i\n", sum);
	return (0);
}
