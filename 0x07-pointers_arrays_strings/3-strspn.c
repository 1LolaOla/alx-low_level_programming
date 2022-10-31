#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 * @s: The string to be searched.
 * @accept: The prefix to be measured.
 *
 * Return: The number of bytes in s which
 * consist only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	int z = 0, x, y;

	for (x = 0; s[x] != '\0'; x++)
	{
		if (s[x] != 32)
		{

			for (y = 0; accept[y] != '\0'; y++)
			{

				if (s[x] == accept[y])
					z++;
			}

		}
		else
			return (z);
	}
		return (bytes);
}
