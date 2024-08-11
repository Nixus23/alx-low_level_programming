#include "lists.h"
/**
 * add_node - function adds a new node at the beginning of a link list
 * @head: the pointer to the head of the list
 * @str: the data to add to the list
 * Return: function returns a pointer to the struct
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *link;
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

	link->next = *head;

	*head = link;

	return (link);


}
