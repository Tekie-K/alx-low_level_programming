#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
 * followed by a new line
 */
void print_alphabet_x10(void)
{
	int i;
	int k;

	for (i = 1; i <= 10; i++)
	{
		for (k = 'a'; k <= 'z'; k++)
			_putchar(k);
	_putchar('\n');
	}
}
