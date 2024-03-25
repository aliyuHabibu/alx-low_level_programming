#include "function_pointers.h"

/**
 * int_index - function name
 * @array: pointer to array
 * @size: array size
 *
 * Return: Always int.
 */
int int_index(int *array, int size, int (*cmp)(int ))
{
	int n, i = 0;

	if (size <= 0)
		return (-1);

	while (i < size)
	{
		n = (*cmp)(array[i]);
		if (n == 1)
		{
			return (i);
			break;
		}
		i++;
	}
	return (i);
}
