#include "dog.h"
/**
 * init_dog - function initializes a struct
 * * @d: a pointer to the struct
 * @name: the pointer to the name of the dog in the struct
 * @age: the age of the dog in the struct
 * @owner: the pointer to the name of the owner of the dog
 * Return: the function has a void return
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}
