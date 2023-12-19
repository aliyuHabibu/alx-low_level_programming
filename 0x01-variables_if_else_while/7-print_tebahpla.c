#include <stdio.h>
/**
 * main - main function
 * Return: Always 0
 */
int main(void)
{
	char s;

	for (s = 'z'; s >= 'a'; --s)
	{
		putchar(s);
	}
	putchar(10);
	return (0);
}
