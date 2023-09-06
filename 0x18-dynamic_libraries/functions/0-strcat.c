#include "main.h"

/**
 * _strcat - concatenate two strings
 * @dest: char string to concatenate to
 * @src: char string
 * Return: pointer to resulting string `dest`
 */

char *_strcat(char *dest, char *src)
{
	int x, c;

	for (x = 0; dest[x] != '\0'; x++)
		;

	for (c = 0; src[c] != '\0'; c++)
	{
		dest[x] = src[c];
		x++;
	}

	dest[x] = '\0';
	return (dest);
}
