#include "main.h"

/**
 * _memcpy - function name
 * @dest: pointer var. 1
 * @src: pointer var. 2
 * @n: size of copy
 * Return: Always char.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
