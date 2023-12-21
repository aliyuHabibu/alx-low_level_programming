#include "main.h"
/**
 * print_alphabet_x10 - prototype
 * @i: local var. 1
 * @c: local var. 2
 * Return: Nothing
 */
void print_alphabet_x10(void)
{
	int i = 0;
	char c;

	while (i <= 9)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		i++;
		_putchar(10);
	}
}
