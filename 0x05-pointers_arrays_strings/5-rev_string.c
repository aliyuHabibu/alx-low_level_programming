#include "main.h"

/**
 * rev_string - prototype
 * @s: var 1
 * Return: Nothing
 */
void rev_string(char *s)
{
	int i = 0;
	int r;

	while (s[i] != '\0')
		i++;
	r = i;
	while (r >= 0)
	{
		_putchar(s[r]);
		--r;
	}
	_putchar(10);
}
