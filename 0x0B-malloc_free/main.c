#include <stdio.h>

/**
 *
 */
int main(void)
{
	int n = 9;
	int *r;
	int **x;

	r = &n;

	x = &r;

	printf("%d\n", n);
	printf("%d\n", *r);
	printf("%d\n", **x);

	printf("%p\n", &n);
	printf("%p\n", r);
	printf("%d\n", *x);

	return (0);
}
