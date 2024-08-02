#include "lists.h"
/**
 * print_list - function prints all the elements of a linked list
 * @h: a pointer to the struct data structure
 * Return: function returns the number of node
 */
size_t print_list(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		char *str = h->str;
		int len = h->len;

		if (str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%i] %s\n", len, str);
		}
		h = h->next;
		++count;
	}
	return (count);
}
