#include "main.h"

/**
 * _isdigit - checks whether the input is a digit
 * @c: the character to be checked
 * Return: 1 for digit or 0 for else
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
