#include "main.h"

/**
 * _abs - prototype
 * @n: local var.
 * @i: local var.
 * Return: Always something
 */
int _abs(int n)
{
	int i;
	if (n < 0)
	{
		i = - n;
		return (i);
	}
	else
	{
		i = n;
		return (i);
	}
	return (0);
}
