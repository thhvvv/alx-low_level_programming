#include "main.h"

/**
 * print_alphabet_x10 - print lowercase 10 times
 * print_alphabet - print lowercase a to z 10 times
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; i++)
		print_alphabet();
}
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);
	_putchar('\n');
}
