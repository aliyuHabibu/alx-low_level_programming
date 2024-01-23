#include "main.h"

/**
 * _strstr - function name
 * @haystack - main string
 * @needle: substring
 *
 * Return: Always char.
 */
char *_strstr(char *haystack, char *needle)
{
	int i, r = 0;

	i = 0;
	while (haystack[i])
	{
		if (haystack[i] == needle[r])
		{
			haystack += i;
			return (haystack);
		}
		i++;
	}
	return ('\0');
}
