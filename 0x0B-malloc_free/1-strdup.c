#include "main.h"

/**
 * _strdup - function name
 * @str: var. pointer
 * Return: Always char
 */
char *_strdup(char *str)
{
	char *c;
	int i;
	int x;

	if (str == NULL)
		return (NULL);
	i = 0;
	while (str[i] != '\0')
		i++;

	c = malloc(i + 1 * sizeof(char));

	i = 0;
	x = 0;
	while (str[x] != '\0')
	{
		c[i] = str[x];
		i++;
		x++;
	}
	return (c);
}
