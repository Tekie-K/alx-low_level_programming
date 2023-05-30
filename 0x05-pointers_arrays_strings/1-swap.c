#include "main.h"
/**
 * swap_int -  a function that swaps the values of two integers
 * @a: first int to be swapped
 * @b: second int to be swapped
 */

void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
