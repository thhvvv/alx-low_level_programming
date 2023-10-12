#include "main.h"

/**
 * print_numbers- Print 0-9
 *
 * Return: digits 0-9
 */

void print_numbers(void)
{
	int num;

	for (num = '0'; num <= '9'; num++)
	{
		_putchar(num);
	}
	_putchar('\n');
}
