#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of linked list
 * @head: head of linked list
 * @index: index of node
 * Return: node or null
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int idx = 0;
	if (!head)
		return (NULL);
	while (head && idx < index)
	{
		head = head->next;
		idx++;
	}
	if (head)
	{
		return (head);
	}
	else
	{
		return (NULL);
	}
}
