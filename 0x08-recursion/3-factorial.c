#include "main.h"

/**
 * factorial - function name
 * @n: prototype
 * Return: Always integer
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
