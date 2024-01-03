#include "main.h"

/**
 * print_rev - prototype
 * @s: var. 1
 * Return: Nothing
 */
void print_rev(char *s)
{
	int i = 0;
	int r;

	while (s[i] != '\0')
		i++;
	for (r = i; r >= 0; --r)
	{
		_putchar(s[r]);
	}
	_putchar(10);
}
