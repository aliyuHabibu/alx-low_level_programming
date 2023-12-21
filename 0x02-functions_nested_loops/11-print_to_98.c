#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * print_to_98 - prototype
 * @n: var 1
 * Return: Nothing
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n <= 98)
		{
			printf("%d", n);
			if (n != 98)
			{
				putchar(',');
				putchar(' ');
			}
			else
				break;

			n++;
		}
	}
	else if (n >= 98)
	{
		while (n >= 98)
		{
			printf("%d", n);
			if (n != 98)
			{
				putchar(',');
				putchar(' ');
			}
			else
				break;
			--n;
		}
	}
		putchar(10);
}
