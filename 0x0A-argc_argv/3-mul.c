#include <stdio.h>
#include <stdlib.h>

/**
 * main - function name
 * @argc: arguement count
 * @argv: arguement vector
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i = 0;
	int result = 1;

	while (i < argc)
	{
		if (argc < 2)
			printf("Error\n");
		else if (i != 0)
		{
			while (i < argc)
			{
				result *= atoi(argv[i]);
				i++;
			}
			printf("%d\n", result);
		}
		i++;
	}
	return (0);
}
