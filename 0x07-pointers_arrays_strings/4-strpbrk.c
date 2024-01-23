#include "main.h"

/**
 * _strpbrk - function name
 * @s: var 1
 * @accept: var 2
 *
 * Return: Always char.
 */
char *_strpbrk(char *s, char *accept)
{
	int i, x;

	i = 0;
	while (s[i])
	{
		x = 0;
		while (accept[x])
		{
			if (s[i] == accept[x])
			{
				s = s + i;
				return (s);
			}
			x++;
		}
		i++;
	}
	return ('\0');
}
