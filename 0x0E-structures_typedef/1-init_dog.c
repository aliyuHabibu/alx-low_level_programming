#include "dog.h"

/**
 * init_dog - function name
 * @d: pointer to struct
 * @name: pointer struct element 1
 * @age: element 2
 * @owner: element 3
 *
 * Return: Nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
