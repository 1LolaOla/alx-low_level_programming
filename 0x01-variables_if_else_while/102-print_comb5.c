#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * @void: takes no args
 * Return: 0 if successful
 */
int main(void)
{
	int innerTrack = 1;
	int outerTrack = 0;

	while (outerTrack < 100)
	{
		while (innerTrack < 100)
		{
			int innerFirst = innerTrack / 10;
			int innerSecond = innerTrack % 10;
			int outerFirst = outerTrack / 10;
			int outerSecond = outerTrack % 10;

			putchar(outerFirst + '0');
			putchar(outerSecond + '0');
			putchar(' ');
			putchar(innerFirst + '0');
			putchar(innerSecond + '0');

			if (!(innerTrack == 99 && outerTrack == 98))
			{
				putchar(',');
				putchar(' ');
			}

			innerTrack++;
		}
		outerTrack++;
		innerTrack = outerTrack + 1;
	}

	putchar('\n');
	return (0);
}
