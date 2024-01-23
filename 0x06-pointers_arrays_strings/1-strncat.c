#include "main.h"

/**
 * _strncat - prototype
 * @dest: pointer 1
 * @src: pointer 2
 * @n: local var.
 * Return: Always chars
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, x;

	x = 0;
	while (dest[x] != '\0')
		x++;
	i = 0;
	while (i < n)
	{
		if (src[i] == '\0')
		{
			break;
		}
		dest[x] = src[i];
		x++;
		i++;
	}
	return (dest);
}
