#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This function prints the lowercase and uppercase alphabets
 * followed by a new line.
 * Return: 0 (Success)
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

