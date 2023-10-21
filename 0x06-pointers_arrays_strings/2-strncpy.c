#include "main.h"
/**
 * _strncpy - copy a string
 * @wrto: input value
 * @src: input value
 * @n: input value
 *
 * Return: wrto
 */
char *_strncpy(char *wrto, char *src, int n)
{
	int j;

	j = 0;
	while (j < n && src[j] != '\0')
	{
		wrto[j] = src[j];
		j++;
	}
	while (j < n)
	{
		wrto[j] = '\0';
		j++;
	}

	return (wrto);
}
