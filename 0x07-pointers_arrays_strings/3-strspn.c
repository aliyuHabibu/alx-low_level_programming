#include "main.h"

/****
 * _strspn - function name
 * @s: pointer var. 1
 * @accept: pointer var. 2
 *
 * Return: Always int.
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, r, t;

	i = 0;
	t = 0;
	while (accept[i])
	{
		r = 0;
		while (s[r] != 32)
		{
			if (s[r] == accept[i])
				t++;
			r++;
		}
		i++;
	}
	return (t);
}

