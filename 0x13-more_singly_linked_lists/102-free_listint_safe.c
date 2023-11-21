#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_listint_safe - frees a linked list
 * @h: pointer to first node on list
 * Return: number of elements on freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	int diff;
	listint_t *current;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		diff = *h - (*h)->next;
		if (diff > 0)
		{
			current = (*h)->next;
			free(*h);
			*h = current;
			len++;
		}
		else
		{
			free(*h);
			*h = NULL;
			len++;
			break;
		}
	}

	*h = NULL;

	return (len);
}
