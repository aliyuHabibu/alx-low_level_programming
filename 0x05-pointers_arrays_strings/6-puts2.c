#include "main.h"

/**
 * puts2 - prototype
 * @str: var 1
 * Return: Nothing
 */
void puts2(char *str)
{
	int r = 0;

	while (str[r] != '\0')
	{
		if (r % 2 == 0)
			_putchar(str[r]);
		r++;
	}
	_putchar(10);
}
