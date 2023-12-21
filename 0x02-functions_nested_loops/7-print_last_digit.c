#include "main.h"

/**
 * print_last_digit - prototype
 * @n: local var.
 * Return: Always 0
 */
int print_last_digit(int n)
{
	int x;
	int i;

	if (n >= 0)
	{
		x = n % 10;
		_putchar(x + '0');
		return (x);
	}
	else if (n < 0)
	{
		x = -n;
		i = x % 10;
		_putchar(i + '0');
		return (i);
	}
	return (0);
}
