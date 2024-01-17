#include "main.h"

/**
 * str_concat - function name
 * @s1: pointer 1
 * @s2: pointer 2
 * Return: Always char.
 */
char *str_concat(char *s1, char *s2)
{
	int i, x, r, m, t;
	char *s;

	i = 0;
	while (s1[i] != '\0')
		i++;
	/* Get first string length */
	x = 0;
	while (s2[x] != '\0')
		x++;
	/* Get second string length */
	r = i + x;

	s = malloc(r * sizeof(char));

	m = 0;
	x = 0;
	while (m <= i)
	{
		s[m] = s1[x];
		m++;
		x++;
		if (m == i)
		{
			t = 0;
			while (s2[t] != '\0')
			{
				s[m] = s2[t];
				m++;
				t++;
			}
		}
	}
	return (s);
}

