#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function
 * @argc: var 1
 * @argv: var 2
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		if (i == argc -1)
		{
			printf("%d\n", i);
		}
		i++;
	}
	(void)argv;
	return (0);
}
