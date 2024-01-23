#include "main.h"

/**
 * _strcat - function name
 * @dest: first pointer
 * @src: second pointer
 * Return: Always a character
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int r = 0;

	while (dest[i] != '\0')
		i++;
	for (; src[r] != '\0'; r++)
	{
		dest[i] = src[r];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
