#include "variadic_functions.h"
/**
 * print_numbers - functions prints numbers
 * @separator: the symbol separating the numbers
 * @n: the numbers of function arguments
 * Return: the function has a void return
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list numerals;

	va_start(numerals, n);

	for (i = 0; i < n; i++)
	{
		printf("%i", va_arg(numerals, int));
		if (separator != NULL && i != (n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(numerals);
}
