#include <stdio.h>
#include <stdlib.h>

/**
 * main - function name
 * @argc: var 1
 * @argv: var 2
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
