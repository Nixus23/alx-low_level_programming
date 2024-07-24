#include "function_pointers.h"
/**
 * print_name - function prints a name by using a function pointer
 * @name: the name parameter
 * @f: the pointer to the function
 * Return: the function has a void return
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL || name == NULL)
		exit(EXIT_FAILURE);
	f(name);
}
