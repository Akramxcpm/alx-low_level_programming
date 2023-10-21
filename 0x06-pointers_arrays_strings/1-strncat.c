#include "main.h"
/**
 * _strncat - concatenate two strings
 * using at most n bytes from src
 * @wrto: input value
 * @src: input value
 * @n: input value
 *
 * Return: wrto
 */
char *_strncat(char *wrto, char *src, int n)
{
	int i;
	int j;

	i = 0;
	while (wrto[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
	wrto[i] = src[j];
	i++;
	j++;
	}
	wrto[i] = '\0';
	return (wrto);
}
