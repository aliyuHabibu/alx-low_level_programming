#include "3-calc.h"

/**
 * main - check and perform the desired function
 * @ac: arguement count
 * @av; arguement vector
 *
 * Return: Always 0.
 */
int main(int ac, char *av[])
{
	int i;
	int *n;
	(void)av;
	(void)i;

	if (ac != 4)
	{
		printf("Error\n");
		exit(98);
	}
	n = get_op_func(av[3]);
	printf("%p\n", n);
	/*if (n == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if (av[4] == 0)
	{
		printf("Error\n");
		exit(100);
	}
	i = (*n)(atoi(av[2]), atoi(av[4]));
	printf("%d\n", i);*/

	return (0);
}

