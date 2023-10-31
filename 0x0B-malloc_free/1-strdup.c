#include "main.h"
#include <stdlib.h>

/**
 * *_strdup -  returns a pointer to a new space
 * @str: contains string
 *
 * Return: 0 failure
 */
char *_strdup(char *str)
{
	int i, j;
	char *p;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		;
	p = (char *)malloc(sizeof(char) * (i + 1));
	if (p == NULL)
		return (NULL);
	for (j = 0; j <= i; j++)
		p[j] = str[j];

	return (p);
}
