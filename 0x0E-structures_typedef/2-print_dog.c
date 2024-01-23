#include "dog.h"

/**
 * print_dog - function name
 * @d: pointer to struct
 *
 * Return: Nothing
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		printf("nil\n");
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
