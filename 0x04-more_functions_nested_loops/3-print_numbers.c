#include "main.h"
/**
 * print_numbers - print numbers from 0-9
 * Return: 0 always success
 */
void print_numbers(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}
