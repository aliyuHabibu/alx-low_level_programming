#include "main.h"

/**
 * _strchr - function name
 * @s: pointer to func.
 * @c: function char.
 * Return: Always char.
 */
char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (1)
	{
		i = *s;
		if (i == c)
			return (s);
		else if(i == 0)
			return (NULL);
		s++;
	}
}
