#include "lists.h"
/**
 * add_dnodeint_end - adds new node ata the end of dlistint_t list
 * @head: head node
 * @n: new node integer
 * Return: address of new element, or NULLif fail
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *current, *new;
	new = (dlistint_t *) malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		new->prev = NULL;
		(*head) = new;
		return (new);
	}
	current = *head;
	while (current->next != NULL)
	{
		current = current->next;
	}
	current->next = new;
	new->prev = current;
	new->next = NULL;
	return (new);
}
