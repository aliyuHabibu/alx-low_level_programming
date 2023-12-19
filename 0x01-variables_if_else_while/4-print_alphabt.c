#include <stdio.h>
/**
 * main - main function
 * Return: Always 0
 */
int main(void)
{
	char s;

	for (s = 'a'; s <= 'z'; s++)
	{
		if (s == 'e' || s == 'q')
			continue;

		else
			putchar(s);
	}
	putchar(10);
	return (0);
}
