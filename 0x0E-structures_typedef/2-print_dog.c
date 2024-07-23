#include "dog.h"
/**
 * print_dog - function prints the elements of the struct dog
 * @d: a pointer to the struct dog
 * Return: the function has a void return
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	printf("Name: %s\n", (*d).name);
	if ((d)->name == NULL)
	{
		printf("Name: (nil)\n");
	}
	printf("Age: %f\n", (*d).age);
	if ((d)->age < 0)
	{
		printf("Age: (nil)\n");
	}
	printf("Owner: %s\n", (*d).owner);
	if ((d)->owner == NULL)
	{
		printf("Owner: (nil)\n");
	}
}
