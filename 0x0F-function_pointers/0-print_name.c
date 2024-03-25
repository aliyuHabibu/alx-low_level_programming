#include "function_pointers.h"

/**
 * print_name - function name
 * @name: pointer to name
 * @f: function pointer
 *
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
