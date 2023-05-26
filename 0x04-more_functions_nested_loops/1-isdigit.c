#include "main.h"
/**
 * main - chekcs for digits 0-9
 * Return: 1 if true & 0 if false
 */
int _isdigit(int c)
{
	if ( c >= 48 && c < 58)
	{
		return (1);
	}
	return (0);
}
