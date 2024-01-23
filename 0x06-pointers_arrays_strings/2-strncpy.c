#include "main.h"

/**
 * _strncpy - prototype
 * @dest: pointer 1
 * @src: pointer 2
 * @n: local var
 * Return: Always chars
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	/*int x = 0;*/

	while (src[i] != '\0' && i <= n)
	{
		dest[i] = src[i];
		i++;
		/*x++;*/
	}
	return (dest);
}
