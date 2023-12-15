#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char s[] ="and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	int n;

	while (s[n] != '\0')
	{
		putchar(s[n]);

		n++;
	}
	putchar(10);



	return (1);
}
