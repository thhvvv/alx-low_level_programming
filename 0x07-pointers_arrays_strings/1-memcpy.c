#include "main.h"

/**
 * _memcpy - copies n bytes from and to another
 * @n: number of bytes to be copied
 * @src: source
 * @dest: destinatioon
 *
 * Return: destination of n bytes copied
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) = *(src + i);
	return (dest);
}
