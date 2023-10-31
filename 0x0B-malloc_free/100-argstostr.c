#include "main.h"
#include <stdlib.h>

/**
 * *argstostr - concatenates arguments
 * @ac: argument count
 * @av: argument vector
 *
 * Return: character
 */
char *argstostr(int ac, char **av)
{
	int i, j, c, ia;
	char *arg;

	if (ac == 0)
		return (NULL);
	for (c = i = 0; i < ac; i++)
	{
		if (*av == NULL)
			return (NULL);

		for (j = 0; av[i][j] != '\0'; j++)
			c++;
		c++;
	}
	arg = malloc((c + 1) * sizeof(char));

	if (arg == NULL)
	{
		free(arg);
		return (NULL);
	}

	for (i = j = ia = 0; ia < c; j++, ia++)
	{
		if (av[i][j] == '\0')
		{
			arg[ia] = '\n';
			i++;
			ia++;
			j = 0;
		}
		if (ia < c - 1)
			arg[ia] = av[i][j];
	}
	arg[ia] = '\0';

	return (arg);
}
