#include "main.h"

/**
 * print_diagsums - function name
 * @a: pointer var.
 * @size: array size
 *
 * Return: Nothing
 */
void print_diagsums(int *a, int size)
{
	int i, j;
	int clockWise = 0;
	/*int anticlockWise = 0;*/

	i = 0;
	while (a[i] <= a[size - 1])
	{
		j = 0;
		while (a[j] <= a[size - 1])
		{
			if (a[i] == a[j])
			{
				clockWise += a[i];
			}
			j++;
		}
		i++;
	}
/*	while (i >= 0)
	{
		for (; j >= 0; --j)
		{
			if (i == j)
			{
				anticlockWise += a[i] + a[j];
			}
		}
		--i;
	}*/
	printf("%d\n", clockWise);
}
