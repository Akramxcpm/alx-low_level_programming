#include "main.h"
/**
 * print_rev - print in reverse
 * @str: string
 * return: 0
 */
void print_rev(char *str)
{
	int lenth= 0;
	int o;

	while (*str != '\0')
	{
		lenth++;
		str++;
	}
	str--;
	for (o = lenth; o > 0; o--)
	{
		_putchar(*str);
		str--;
	}

	_putchar('\n');
}

