#ifndef DOG_H
#define DOG_H
/**
 * struct dog - has dog attributes
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the dog owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
