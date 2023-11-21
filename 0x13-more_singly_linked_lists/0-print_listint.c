#include "lists.h"
#include <stdlib.h>
/**
 * print_listint - print elements in list
 * @p: pointer to linked list
 * Return: number of nodes
 */
size_t print_listint(const listint_t *p)
{
	size_t i = 0;

	while (p)
	{
		printf("%d\n", p->n);
		i++;
		p = p->next;
	}
	return (i);
}
