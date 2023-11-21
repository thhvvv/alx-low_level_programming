#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * add_nodeint - adds new node at beginning of list
 * @head: double pointer to first node
 * @n: input for new node
 * Return: address of new input
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *input;

	input = malloc(sizeof(listint_t));

	if (!input)
		return (NULL);
	input->n = n;
	input->next = *head;
	*head = input;
	return (input);
}
