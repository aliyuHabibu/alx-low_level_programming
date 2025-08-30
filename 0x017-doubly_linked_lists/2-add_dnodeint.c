#include "lists.h"

/**
 * add_dnodeint - Function to add a node at the beginning
 * @head: Double pointer to the head of the node
 * @n: Value to add
 *
 * Return: Address of the new node i.e head.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	if (*head == NULL)
	{
		new->n = n;
		new->next = NULL;
		new->prev = NULL;
		*head = new;
		/*return new;*/
	}
	else
	{
		new->n = n;
		new->next = *head;
		new->prev = NULL;
		(*head)->prev = new;
		*head = new;
		/*return new;*/
	}
	return (new);
}
