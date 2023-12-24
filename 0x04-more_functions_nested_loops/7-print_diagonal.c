#include "main.h"

/**
 * print_diagonal - prototype
 * @n: local var
 * Return: Always Nothing
 */
void print_diagonal(int n)
{
	int i, r;

	if (n > 0)
	{
		i = 1;
		while (i <= n)
		{
			r = 1;
			while (r <= i)
			{
				_putchar(' ');
				if (r == i)
					_putchar('\\');
				r++;
			}
			_putchar('\n');
			i++;
		}
	}
	else
		_putchar(10);
}



