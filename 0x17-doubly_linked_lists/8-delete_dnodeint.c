#include "lists.h"
#include <stddef.h>
/**
 * delete_dnodeint_at_index - deletes node at index
 * @head: head double pointer
 * @index: index of node to be deleted; starts with 0
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp = *head;
	if (head == NULL)
		return (-1);
	for (; index != 0; index--)
	{
		if (temp == NULL)
			return (-1);
		temp = temp->next;
	}
	if (temp == *head)
	{
		*head = temp->next;
		if (*head == NULL)
			(*head)->prev = NULL;
	}
	else 
	{
		temp->prev->next = temp->next;
		if (temp->next != NULL)
			temp->next->prev = temp->prev;
	}
	free(temp);
	return (1);
}
