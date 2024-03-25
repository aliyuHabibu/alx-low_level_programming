#include "function_pointers.h"

/**
 * array_iterator - function name
 * @array: pointer to the array
 * @size: array size
 *
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int ))
{
	long unsigned int i = 0;

	while (i < size)
	{
		(*action)(array[i]);
		i++;
	}
}
