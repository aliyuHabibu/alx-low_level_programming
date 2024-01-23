#include "main.h"

/**
 * _memset - function name
 * @s: pointer param.
 * @b: function char.
 * @n: function int
 * Return: Always char.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
