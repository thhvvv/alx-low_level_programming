#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
 * dlistint_len - returns number of elements in linked list
 * @h: head
 * Return: number
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;
	while (h)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
