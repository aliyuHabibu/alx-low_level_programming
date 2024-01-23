#include "dog.h"

/**
 * free_dog - function name
 * @d: pointer to struct
 *
 * Return: Nothing
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	if (d->name != NULL)
		free(d);
	if (d->owner != NULL)
		free(d);
	free(d);
}
