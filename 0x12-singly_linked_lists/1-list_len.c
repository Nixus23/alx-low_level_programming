#include "lists.h"
/**
 * list_len - prints the number of elements in the linked list
 * @h: pointer to the struct data structure
 * Return: the function returns the number of elements
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		++count;
	}
	return (count);
}
