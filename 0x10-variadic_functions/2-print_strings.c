#include "variadic_functions.h"

/**
 * print_strings - function name
 * @separator: pointer to string to use
 * @n: number of times to print
 *
 * Return: Nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list x;
	unsigned int i;

	va_start(x, n);

	if (separator == NULL)
		return;

	else
	{
		for (i = 0; i < n; i++)
		{
			printf("%s", va_arg(x, char *));
			if (!(i == n - 1))
				printf("%s", separator);
		}
		putchar(10);
		va_end(x);
	}
}
