#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 * @argc: function parameter that counts the arguments passed
 * @argv: function parameter that stores the strings of the arguments
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	int i;

	i = argc - 1;

	printf("%i\n", i);
	return (0);
}
