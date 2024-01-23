#include "main.h"

/**
 * reverse_array - prototype
 * @a: pointer to int
 * @n: local var.
 * Return: Nothing
 */
void reverse_array(int *a, int n)
{
	int i;

	for (i = n - 1; i >= 0; --i)
	{
		printf("%d", a[i]);
		if (!(i - 1 < 0))
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar(10);
}
