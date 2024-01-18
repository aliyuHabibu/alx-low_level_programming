#include "main.h"

/**
 * create_array - function name
 * @size: array size
 * @c: character
 * Return: Always char.
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	s = malloc(size * sizeof(char));
	if (size == 0)
		return (NULL);
	i = 0;
	while (i < size)
	{
		s[i] = c;
		i++;
	}
	return (s);
	free(s);
}
