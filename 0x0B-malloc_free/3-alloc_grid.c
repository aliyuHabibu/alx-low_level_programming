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

	if (width == 0 || height == 0)
		return (NULL);

	a = malloc(sizeof(int) * height);
	if (a != NULL)
	{
		i = 0;
		while (i < height)
		{
			a[i] = malloc(width * sizeof(int));
			if (a[i] != NULL)
			{
				r = 0;
				while (r < width)
				{
					a[i][r] = 0;
					r++;
				}
			}
			i++;
		}
		return (a);
	}
	else
		return (NULL);
}
