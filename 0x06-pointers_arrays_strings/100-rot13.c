#include "main.h"

/**
 * rot13 - rot13 encryption of strings
 * @s: string to encrypt
 *
 * Return: encrypted string
 */
char *rot13(char *s)
{
	char ref[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char src[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";
	int i = 0;
	int j = 0;

	while (s[i] != '\0')
	{
		j = 0;
		while (ref[j] != '\0')
		{
			if (s[i] == ref[j])
			{
				s[i] = src[j];
				j = 0;
				break;
			}
			j++;
		}
		i++;
	}
	return (s);
}
