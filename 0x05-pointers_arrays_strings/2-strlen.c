#include "main.h"

/**
 * _strlen - prototype
 * @s: local var.
 * Return: Always something
 */
int _strlen(char *s)
{
	int i = 1;

	while (*s != '\0')
	{
		s++;
		i++;
	}
	return (i);
}
