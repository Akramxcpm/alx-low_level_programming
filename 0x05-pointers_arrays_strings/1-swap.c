#include "main.h"
/**
 * swap_int - swap two integers
 * @a and b are the integers to swap
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

