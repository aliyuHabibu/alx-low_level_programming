#include "main.h"

/**
 * puts_half - prototype
 * @str: var. 1
 * Return: Nothing
 */
void puts_half(char *str)
{
	int i = 0;
	int x;

	while (str[i] != '\0')
		i++;
	x = i / 2;
	while (str[x] != '\0')
	{
		_putchar(str[x]);
		x++;
	}
	_putchar(10);
}
