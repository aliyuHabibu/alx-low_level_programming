#include "main.h"

/**
 * times_table - prototype
 * Return: Nothing
 */
void times_table(void)
{
	int i, x, n, r, s;

	i = 0;
	while (i <= 9)
	{
		x = 0;
		while (x <= 9)
		{
			n = i * x;
			if (n / 10 == 0)
			{
				n = i * x;
				_putchar(' ');
				_putchar(n + '0');
				_putchar(',');
				_putchar(' ');
			}
			else if (n / 10 != 0)
			{
				r = n / 10;
				s = n % 10;
				_putchar(r + '0');
				_putchar(s + '0');
				_putchar(',');
				_putchar(' ');
			}
			x++;
		}
		_putchar('\n');
		i++;
	}
}
