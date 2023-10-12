#include "main.h"

/**
 * print_line- Draws a straight line using character _
 * @n: Number of _ to be printed
 */
void print_line(int n)
{
	int lines;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (lines = 1; lines <= n; lines++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
