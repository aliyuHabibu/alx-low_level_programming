#include "main.h"

/**
 * _strcmp - prototype
 * @s1: pointer 1
 * @s2: pointer 2
 * Return: Always a number
 */
int _strcmp(char *s1, char *s2)
{
	int i, x;

	i = 0;
	while (s1[i] != '\0')
		i++;
	x = 0;
	while (s2[x] != '\0')
		x++;
	if (i == x)
		return (0);
	else if (i < x)
		return (-15);
	else
		return (15);
}
