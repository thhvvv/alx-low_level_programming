#include "main.h"

/**
 * _memset - fills memory with constant byte
 * @b: constant byte
 * @s: pointed memory area
 * @n: bytes of memory to be changed
 *
 * Return: memory with constant byte
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
