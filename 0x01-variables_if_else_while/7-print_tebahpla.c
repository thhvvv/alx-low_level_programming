#include <stdio.h>

/**
 * main - entrypoint description
 *
 * Return: Always0
 */
int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
		putchar(letter);
	putchar('\n');
	return (0);
}
