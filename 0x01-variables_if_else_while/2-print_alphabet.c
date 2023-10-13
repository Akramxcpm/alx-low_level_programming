#include <stdio.h>

/**
 * main - Prints the alphabet.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char min = 'a';

	while (min <='z')
	{
		putchar(min);
		min++;
	}
	putchar('\n');
	return (0);
}

