#include <stdio.h>
/**
 * main - main function
 * Return: Always 0
 */
int main(void)
{
	int a = 0;
	int x = 1;

	while (a <= x || a >= x)
	{
		if (x > a)
		{
			putchar('0' + a);
			putchar('0' + x);
			putchar(',');
			putchar(' ');
		}
		else if (x == 9)
		{
			a++;
		}
		x++;
	}
	putchar(10);
	return (0);
}
