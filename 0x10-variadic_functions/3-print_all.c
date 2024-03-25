#include "variadic_functions.h"

/**
 * print_all - function name
 * @format: pointer to formated string
 *
 * Return: Nothing.
 */
void print_all(const char * const format, ...)
{
	int x;
	char *m;
	va_list r;

	va_start(r, format);

	x = 0;
	while (format[x] != '\0')
	{
		if (format[x] == 'c')
			printf("%c", va_arg(r, int));

		else if (format[x] == 'i')
			printf("%d", va_arg(r, int));

		else if (format[x] == 'f')
			printf("%f", va_arg(r, double));

		else if (format[x] == 's')
		{
			m = va_arg(r, char *);
			if (m == NULL)
				printf("nil");
			printf("%s", m);
		}

		if (format[x + 1] != '\0')
			printf(", ");
		x++;
	}
	putchar(10);
}
