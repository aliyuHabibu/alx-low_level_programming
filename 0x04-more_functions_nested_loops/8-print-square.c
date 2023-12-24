#include "main.h"

/**
 * print_square - prototype
 * @size: var 1
 * Return: Always nothing
 */
void print_square(int size)
{
	int i, x;

	for (i = 1; i <= size; i++)
	{
		for (x = 1; x <= size; x++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
