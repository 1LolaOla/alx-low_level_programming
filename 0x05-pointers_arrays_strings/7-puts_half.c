#include "main.h"

/**
 * puts_half - prints later half of string
 * @str: string to print
 *
 * Return: nothing
 */
void puts_half(char *str)
{
	int c, i, limit;

	c = 0;
	i = 0;
	limit = 0;

	while (str[c] != '\0')
	{
		c++;
	}

	if (c % 2 == 0)
		limit = c / 2;
	else
		limit = c / 2 + 1;

	for (i = limit; i < c; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
