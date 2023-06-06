#include "main.h"
/**
 * _strspn - a function that searches a string for any of a set of bytes
 * @s: string to be searched
 * @accept: input
 * Return: Always 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
		if (*s == accept[i])
		return (s);
		}
		s++;
	}
	return ('\0');
}
