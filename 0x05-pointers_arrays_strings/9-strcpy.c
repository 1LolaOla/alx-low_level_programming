#include "main.h"

/**
 * _strcpy - copies a string
 *  @dest: where to copy to
 *  @src: where to copy from
 *
 *  Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int c, i;

	c = 0;

	while (src[c] != '\0')
	{
		c++;
	}

	for (i = 0; i < c; i++)
	{
		dest[i] = src[i];
	}
	dest[c] = '\0';

	return (dest);
}
