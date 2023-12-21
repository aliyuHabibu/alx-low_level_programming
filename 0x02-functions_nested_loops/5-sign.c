#include "main.h"

/**
 * print_sign - prototype
 * @n: local var.
 * Return: Always something
 */
int print_sign(int n)
{
	if (n > 48)
	{
		_putchar(43);
		return (1);
	}
	if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	return (0);
}
