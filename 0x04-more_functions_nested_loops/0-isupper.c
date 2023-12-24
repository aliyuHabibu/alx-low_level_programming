#include "main.h"

/**
 * _isupper - prototype
 * @c: var 1
 * Return: Always something
 */
int _isupper(int c)
{
	if (!(c >= 65 && c <= 90))
		return (0);
	else
		return (1);
	return (0);
}
