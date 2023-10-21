#include "main.h"
/**
 * _strcat - concatenates two strings
 * @wrto: input value
 * @src: input value
 *
 * Return: void
 */
char *_strcat(char *wrto, char *src)
{
	int i;
	int j;

	i = 0;
	while (wrto[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		wrto[i] = src[j];
		i++;
		j++;
	}

	wrto[i] = '\0';
	return (wrto);
}
