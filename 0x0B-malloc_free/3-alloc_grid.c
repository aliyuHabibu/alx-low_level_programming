#include "main.h"

/**
 * alloc_grid - function name
 * @width: grid width
 * @height: grid height
 * Return: Always int.
 */
int **alloc_grid(int width, int height)
{
	int i, r;
	int **a;

	i = 0;
	while (i < height)
	{
		a = malloc(width * sizeof(int));
		r = 0;
		while (r < width)
		{
			a[r] = 0;
			r++;
		}
		i++;
	}
	return (a);
}
