#include "lists.h"

/**
 * print_list - prints all elements in list_t
 * @h: pointer to the list_t to be printed
 *
 * Return: number of nodes to be printed
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		i++;
	}
	return (i);
}
