#include "lists.h"
/**
 * add_node_end - function adds data at the end of the link list
 * @head: the pointer to the head of the struct
 * @str: the string data to add to the list
 * Return: function returns a pointer to the struct
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
