#include "main.h"

/**
 *  _strlen - gets the length of a string
 *  @s: string to find it's length
 *
 *  Return: length of string
 */
int _strlen(char *s)
{
	int c = 0;

	while (s[c] != '\0')
	{
		c++;
	}

	return (c);
}
