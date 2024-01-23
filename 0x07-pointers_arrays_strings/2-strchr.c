#include "main.h"

/**
 * _strchr - function name
 * @s: pointer to func.
 * @c: function char.
 * Return: Always char.
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			s += i;
			return (s);
		}
		i++;
	}
	return ('\0');
}
