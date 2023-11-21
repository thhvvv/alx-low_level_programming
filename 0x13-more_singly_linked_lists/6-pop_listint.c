#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * pop_listint - deletes head node of list
 * @head: double pointer to list
 * Return: head node's data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *current;
	int i;

	if (*head == NULL)
		return (0);
	current = *head;
	i = (*head)->n;
	*head = (*head)->next;
	free(current);

	return (i);
}
