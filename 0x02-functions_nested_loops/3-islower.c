#include "main.h"

/**
 *_islower - Checks if its lowercase
 *
 * @c: the character to be checked
 *
 * Return: 1 if lowercase 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
