#include "lists.h"

/**
 * dlistint_len - Function to get the number of node
 * @h: Pointer to the head of the list
 *
 * Return: Number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t n;

	n = 0;
	if (h == NULL)
	{
		return (n);
	}
	n++;
	n = n + dlistint_len(h->next);
	return (n);
}
