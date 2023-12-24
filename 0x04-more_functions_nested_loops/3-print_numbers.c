#include "main.h"

/**
 * print_numbers - function prototype
 *
 * Return: Nothing
 */
void print_numbers(void)
{
	int i = 0;

	while (i <= 9)
	{
		_putchar('0' + i);
		i++;
	}
	_putchar('\n');
}
