#include "main.h"

/**
 * _pow_recursion - function name
 * @x: local var.
 * @y: local var. 2
 * Return: Always int
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	return (x * _pow_recursion(x, --y));
}
