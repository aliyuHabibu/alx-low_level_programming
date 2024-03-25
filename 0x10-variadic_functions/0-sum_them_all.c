#include "variadic_functions.h"

/**
 * sum_them_all - function name
 * @n: first arg.
 *
 * Return: Always int.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list p;
	unsigned int i;
	int r = 0;
	va_start(p, n);

	if (n == 0)
		return (0);

	else if (n != 0)
	{
		for (i = 0; i < n; i++)
		{
			r += va_arg(p, int);
		}
		va_end(p);
	}
	return (r);
}
