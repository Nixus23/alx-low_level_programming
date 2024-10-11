#include "hash_tables.h"
/**
 * hash_table_create - function creates a hash table
 * @size: the argument of the size of the array
 * Return: function returns a pointer to the created table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i = 0;
	hash_table_t *table = malloc(sizeof(hash_table_t));

	if (table == NULL)
		return (NULL);
	table->array = malloc(sizeof(hash_node_t *) * size);
	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}
	table->size = size;
	for (i = 0; i < size; i++)
	{
		table->array[i] = NULL;
	} /*Making sure the array is empty*/
	return (table);
}
