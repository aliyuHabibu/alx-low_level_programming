#include "main.h"

/**
 * _strlen - prototype
 * @s: local var.
 * Return: Always something
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
