
#include "main.h"
/**
 * _strlen - generate the length of a string
 * @str: string
 * Return: length
 */
int _strlen(char *str)
{
	int lenth = 0;

	while (*str != '\0')
	{
		lenth++;
		str++;
	}

	return (lenth);
}

