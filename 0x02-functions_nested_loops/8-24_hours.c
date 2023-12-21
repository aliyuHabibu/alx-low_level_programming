#include "main.h"

/**
 * jack_bauer - prototype
 * Return: Nothing
 */
void jack_bauer(void)
{
	int x;
	int i;
	int n;
	int r;

	x = 0;
	while (x <= 2)
	{
		i = 0;
		while (i <= 9)
		{
			n = 0;
			while (n <= 5)
			{
				r = 0;
				while (r <= 9)
				{
					_putchar(x + '0');
					_putchar(i + '0');
					_putchar(':');
					_putchar(n + '0');
					_putchar(r + '0');
					_putchar('\n');
					r++;
				}
				n++;
			}
			if (x == 2 && i == 3)
				break;
			i++;
		}
		x++;
	}
}
