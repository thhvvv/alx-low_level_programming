#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - prints combination of two digits
 *
 * Return: Always 0
 */
int main(void)
{
	int i;
	int j;
	int k;

	i = 0;
	while (i < 100)
	{
		j = i % 10;
		k = i / 10;
		if (k < j)
		{
			putchar(k + '0');
			putchar(j + '0');
			if (i < 89)
			{
				putchar(',');
				putchar(' ');
			}
		}
		i++;
	}
	putchar('\n');
	return (0);
}
