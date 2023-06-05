#include "main.h"
/**
 * _memcopy - function that copies memory area from source to destination
 * @dest: where memory will be pasted
 * @src: where memory will be copied
 * @n: n bytes
 * Return: returns where n bytes of memory is copied
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	unsigned int j;

	for (j = 0; j < n; j++)
	{
		for (i = 0; i < n; i++)
		{
			dest[i] = src[j];
		}
	}
	return (dest);
}
