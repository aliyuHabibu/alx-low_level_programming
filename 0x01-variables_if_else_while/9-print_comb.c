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
		putchar(i + 48);
		if (i == 9)
			continue;
		putchar(',');
		putchar(' ');
	}
	putchar(10);
	return (0);
}
