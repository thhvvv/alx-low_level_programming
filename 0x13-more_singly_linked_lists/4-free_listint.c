#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_listint - frees the memory
 * @head: pointer to the list
 */
void free_listint(listint_t *head)
{
	listint_t *temp;
	if (head == NULL)
		return;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
