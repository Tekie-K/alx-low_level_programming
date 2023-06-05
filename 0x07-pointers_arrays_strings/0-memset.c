#include "main.h"
/**
 * _memset - function that fills memory with a constant byte
 * @s: starting address of a memory to be filled
 * @b: desired value
 * @n: number of bytes to be changed
 * Return: new modified bytes at the starting address with char b with n times
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
