#include <stdio.h>
#include <stdlib.h>
/**
 * main - function entry point
 * @argc: function argument parameter counting the arguments
 * @argv: function argument parameter storing the strings of the arguments
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	int i, prod = 0;

	for (i = 0; i < argc; i++)
	{
		if (argc < 2)
		{
			printf("Error\n");
			return (1);
		}

		if (argc < 4)
		{
			if (atoi(argv[1]) != 0 && atoi(argv[2]) != 0)
			{
				prod = atoi(argv[1]) * atoi(argv[2]);
				printf("%i\n", prod);
				break;
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	return (0);
}
