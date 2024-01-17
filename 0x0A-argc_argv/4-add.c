#include <stdio.h>
#include <stdlib.h>

/**
 * main - main function
 * @argc: var 1
 * @argv: var 2
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i = 0;
	int x = 0;
	int result;

	while (i < argc)
	{
		if (argc < 2)
			printf("%d\n", i);
		else if (i != 0)
		{
			while (x  < argc)
			{
				if (atoi(argv[x]) < 0 && atoi(argv[x]) > 9)
				{
					printf("Error\n");
					return (1);
				}
				else
					result += atoi(argv[x]);
				x++;
			}
			printf("%d\n", result);
		}
		i++;
	}
	return (0);
}
