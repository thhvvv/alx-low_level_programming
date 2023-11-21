#include <stdlib.h>
#include "lists.h"
#include <stdio.h>
/**
 * sum_listint - sum of intergers in a list
 * @head: pointer to first node
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}

