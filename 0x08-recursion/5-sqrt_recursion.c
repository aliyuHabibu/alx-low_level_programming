#include "main.h"

/**
 * _sqrt_recursion - function name
 * @n: local var. 1
 * Return: Always integer
 */
int _sqrt_recursion(int n)
{
	int i = 0;

	if (n < 0)
		return (-1);
	while (i < n)
	{
		if (i * i == n)
			return (i);
		i++;
	}
	return (i);
}
