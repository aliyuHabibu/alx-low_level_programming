#include <stdio.h>
/**
 * main - main function
 * Return: Always 0
 */
int main(void)
{
	int i;
	char a;

	for (i = 0; i <= 9; i++)
	{
		putchar('0' + i);
	}
	for (a = 'a'; a <= 'f'; a++)
	{
		putchar(a);
	}
	putchar(10);
	return (0);
}
