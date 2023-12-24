#include "main.h"
#include <stdio.h>

/**
 * more_numbers - prototype
 * Return: Nothing
 */
void more_numbers(void)
{
	int i, x, s, r;

	for (i = 0; i <= 9; i++)
	{
		for (x = 0; x <= 14; x++)
		{
			if (x > 9)
			{
				s = x / 10;
				r = x % 10;
				_putchar(s + '0');
				_putchar(r + '0');
			}
			else
				_putchar(x + '0');
		}
		putchar(10);
	}
}
