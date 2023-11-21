#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * reverse_listint - reverses linked list
 * @head: pointer to first node on list
 * Return: pointer to first node on new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = previous;
		previous = *head;
		*head = next;
	}

	*head = previous;

	return (*head);
}
