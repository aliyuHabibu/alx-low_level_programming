#include "dog.h"

/**
 * new_dog - function name
 * @name: pointer to struct element 1
 * @age: element 2
 * @owner: element 3
 *
 * Return: Address in memo.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *new;

	new = malloc(sizeof(dog_t));

	if (new == NULL)
		return (NULL);

	new->name = name;
	new->age = age;
	new->owner = owner;

	return (new);
}
