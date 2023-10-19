#include "main.h"

/**
 * _strncpy - copies string
 * @dest: destination of copied string
 * @src: string to be copied
 * @n: number of bytes
 *
 * Return:: copied string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i <= n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}

