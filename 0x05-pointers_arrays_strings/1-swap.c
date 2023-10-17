#include "main.h"
/**
 * swapInt - swap two integers
 * @a and b are the integers to swap
 */
void swapInt(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

