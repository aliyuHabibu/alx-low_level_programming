#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
 * main - main function
 * Return: Always 0
 */
/* betty style doc for function main goes there */
int main(void)
{
	int n, s;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	s = n % 10;

	if (s > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, s);

	else if (s == 0)
		printf("Last digit of %d is %d and is zero\n", n, s);

	else if (s < 6)
		printf("last digit of %d is %d and is less than 6 and not 0\n", n, s);

	return (0);
}
