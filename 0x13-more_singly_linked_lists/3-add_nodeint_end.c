#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * add_nodeint_end - adds a node at the end of linked lisr
 * @head: pointer to first element on list
 * @n: input to add to new element
 * Return: pointer to new node, NULL if fail
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *input;
	listint_t *temp = *head;

	input = malloc(sizeof(listint_t));
	if (!input)
		return (NULL);
	input->n = n;
	input->next = NULL;

	if (*head == NULL)
	{
		*head = input;
		return (input);
	}

	while (temp->next)
		temp = temp->next;
	
	temp->next = input;

	return (input);
}
