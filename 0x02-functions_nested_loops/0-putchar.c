#include "main.h"

/**
 * main - A program that prints _putchar
 *
 *Return: Always 0
 */
int main(void)
{
	char letter[8] = "_putchar";
	int i;

	for (i = 0; i <= 7; i++)
	{
		_putchar(letter[i]);
	}
	_putchar('\n');
	return (0);
}
