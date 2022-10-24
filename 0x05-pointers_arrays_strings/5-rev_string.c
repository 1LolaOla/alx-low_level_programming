#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string
 *
 * Return - nothing
 */
void rev_string(char *s)
{
	int c, i;

	c = 0;
	i = 0;

	while (s[c] != '\0')
	{
		c++;
	}

	for (i = 0; i < c / 2; i++)
	{
		char temp = s[i];

		s[i] = s[c - i - 1];
		s[c - i - 1] = temp;
	}
}
