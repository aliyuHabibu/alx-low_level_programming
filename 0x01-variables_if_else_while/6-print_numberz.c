#include <stdio.h>
/**
 * main - main function
 * Return: Always 0
 */
int main(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		putchar('0' + i);
	}
	putchar(10);
	return (0);
}
