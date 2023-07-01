#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point
 * @void: no args
 * Return: 0 if successful
 */

int main(void)
{
	int outerTrack = 48;
	int innerTrack = 49;

	while (outerTrack <= 57)
	{
		while (innerTrack <= 57)
		{
			putchar(outerTrack);
			putchar(innerTrack);
			if (!(outerTrack == 56 && innerTrack == 57))
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
