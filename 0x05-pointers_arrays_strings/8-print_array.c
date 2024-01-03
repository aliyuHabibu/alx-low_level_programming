#include <stdio.h>
#include "main.h"

/**
 * print_array - prototype
 * @a: my pointer
 * @n: local var.
 * Return: Nothing
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", a[i]);
		if (i == n - 1)
			break;
		putchar(',');
		putchar(' ');
		i++;
	}
	putchar('\n');
}
