#include "main.h"

/**
 * _isalpha - checks if c is lowercase
 *
 * @c: character to be checked
 *
 * Return: 1 is lowercase 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') ||
	    (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
		return (0);
}
