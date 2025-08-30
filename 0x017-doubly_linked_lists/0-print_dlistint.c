#include "lists.h"

/**
 * print_dlistint - Function to print all element in a node
 * @h: Pointer to the head of the node
 *
 * Return: Number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t n;

	n = 0;
	if (h != NULL)
	{
		n++;
		printf("%d\n", h->n);
		n = n + print_dlistint(h->next);
	}
	return (n);
}
