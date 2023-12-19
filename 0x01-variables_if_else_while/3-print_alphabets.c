#include <stdio.h>
/**
 * main - main function
 * Return: Always 0
 */
int main(void)
{
	char s, x;

	for (s = 'a'; s <= 'z'; s++)
	{
		putchar(s);
	}
	for (x = 'A'; x <= 'Z'; x++)
	{
		putchar(x);
	}
	putchar(10);
	return (0);
}
