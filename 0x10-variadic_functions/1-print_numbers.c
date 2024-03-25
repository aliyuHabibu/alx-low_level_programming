#include "variadic_functions.h"

/**
 * print_numbers - function name
 * @separator: pointer to separator char.
 * @n: number of int.
 *
 * Return: Nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list r;
	unsigned int i;
	va_start(r, n);

	if (separator == NULL)
		return;

	else
	{
		i = 0;
		while (i < n)
		{
			printf("%d", va_arg(r, int));
			if (!(i == n - 1))
				printf("%s", separator);
			i++;
		}
		putchar(10);
		va_end(r);
	}
}
