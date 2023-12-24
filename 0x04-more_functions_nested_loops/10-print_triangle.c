#include "main.h"

/**
 * print_triangle - prototype function name
 * @size: local var
 * Return: Always nothing
 */
void print_triangle(int size)
{
	int i, r, x, s;

	x = 1;

	if (size > 0)
	{
		i = 1;
		while (i <= size)
		{
			r = 1;
			while (r <= size - x)
			{
				_putchar(' ');
				r++;
			}
			s = 0;
			while (s <= size - r)
			{
				_putchar('#');
				s++;
			}
			_putchar(10);
			x++;
			i++;
		}
	}
	else
		_putchar('\n');
}
