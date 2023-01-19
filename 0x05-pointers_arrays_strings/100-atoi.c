#include "main.h"

/**
 * _atoi - converts string to integer
 * @s: string variable to convert
 *
 * Return: integer conversion of string
 */
int _atoi(char *s)
{
	int c, i, j;
	unsigned int sum;

	c = 0;
	sum = 0;
	j = 0;

	while (s[c] != '\0')
	{
		c++;
	}

	for (i = 0; i < c; i++)
	{
		if (s[i] >= 48 && s[i] <= 57)
		{
			sum = sum * 10 + (s[i] - 48);

			if (s[i + 1] < 48 || s[i + 1] > 57)
				break;
		}
	}

	while ((s[j] <= 48 || s[j] >= 57) && s[j] != '\0')
	{
		if (s[j] == '-')
			sum = sum * -1;
		j++;
	}
	return (sum);
}
