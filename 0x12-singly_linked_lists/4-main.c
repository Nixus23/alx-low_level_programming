#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *link;
	list_t *new;
	char *newstr;
	int len = 0;

	link = malloc(sizeof(list_t));
	if (link == NULL)
		return (NULL);

	newstr = strdup(str);
	if (newstr == NULL)
	{
		free(link);
		return (NULL);
	}

	while (str[len])
		len++;

	link->str = newstr;
	link->len = len;
	link->next = NULL;

	if (*head == NULL)
		*head = link;
	else
	{
		new = *head;
		while (new->next != NULL)
		{
			new = new->next;
		}
		new->next = link;
	}

	return (*head);
}
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
int main(void)
{
    list_t *head;

    head = NULL;
    add_node_end(&head, "Bob");
    add_node_end(&head, "&");
    add_node_end(&head, "Kris");
    add_node_end(&head, "love");
    add_node_end(&head, "asm");
    print_list(head);
    free_list(head);
    head = NULL;
    return (0);
}
