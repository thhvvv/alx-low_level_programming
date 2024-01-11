#include "lists.h"
/**
 * sum_dlistint - sum of all n of a linked list
 * @head: pointer to head
 * Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
