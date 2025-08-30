#include "lists.h"

/**
 * add_dnodeint_end - Function to add a node at the end
 * @head: Double pointer to the head of the node
 * @n: Value to add
 *
 * Return: Address of the new element.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *h;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	if (*head == NULL)
	{
		new->n = n;
		new->next = NULL;
		new->prev = NULL;
		*head = new;
	}
	else
	{
		h = *head;
		while (*head != NULL)
		{
			if ((*head)->next == NULL)
				break;
			*head = (*head)->next;
		}
		new->n = n;
		new->next = NULL;
		new->prev = *head;
		(*head)->next = new;
		*head = h;
	}
	return (new);
}
