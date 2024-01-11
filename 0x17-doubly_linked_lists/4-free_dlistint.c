#include "lists.h"
/**
 * free_dlistint - frees a double linked list
 * @head: pointer to list to free
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;
	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
