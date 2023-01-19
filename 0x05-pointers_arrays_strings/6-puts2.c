#include "main.h"

/**
 * puts2 - prints every other letter of a str
 * @str: string variable
 *
 * Return: nothing
 */
void puts2(char *str)
{
	int c;
	int i;

	c = 0;
	i = 0;

	while (str[c] != '\0')
	{
		c++;
	}

	for (i = 0; i < c; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}

	_putchar('\n');
}
