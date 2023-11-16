#include "lists.h"
#include <stdio.h>
/**
 * list_len - Returns number of eements in linked list
 * @h: pointer to list_t list
 * Return: number of elements in h
 */
size_t list_len(const list_t *h)
{
size_t n = 0;

while (h)
{
	n++;
	h = h->next;
}
return (n);
}
