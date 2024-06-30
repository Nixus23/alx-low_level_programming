#include "main.h"
/**
 * print_triangle - function prints a triangle shape
 * @size: functions integer parameter
 * Return: function has a void return
 */
void print_triangle(int size)
{
	int i, j;

	if (size >= 1)
	{
		for (i = 0; i < size; i++)
		{
			for (j = size - i; j > 0; j--)
			{
				_putchar(' ');
			}
			for (j = 0; j < i; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
_putchar('\n');
}
