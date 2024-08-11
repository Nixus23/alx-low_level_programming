#include "lists.h"
/**
 * free_list - function frees the memory allocated using malloc
 * @head: the pointer to the linked list head
 * Return: the function has a void return
 */
void free_list(list_t *head)
{
	list_t *less;

	while (head)
	{
		less = head->next;
		free(head->str);
		free(head);
		head = less;
	}
}
