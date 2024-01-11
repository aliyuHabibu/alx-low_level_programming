#include "main.h"

/**
 * _strlen_recursion - function name
 * @s: my pointer
 * Return: lwys integer
 */
int _strlen_recursion(char *s)
{
	int i = 0;
/*	int r;*/

	if (s[i] != '\0')
	{
		i++;
		i = i + _strlen_recursion(s + 1);
	}
	return (i);
}


