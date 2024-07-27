#include "variadic_functions.h"
/**
 * print_strings - function prints strings
 * @separator: the symbol separating the strings
 * @n: the number of strings in the argument
 * Return: the function has a void return
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list strs;

	va_start(strs, n);

	for (i = 0; i < n; i++)
	{
		printf("%s", va_arg(strs, char *));

		if (separator != NULL && i != (n - 1))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(strs);
}
