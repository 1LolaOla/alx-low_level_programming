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
	int innerMostTrack = 50;

	while (outerTrack <= 57)
	{
		while (innerTrack <= 57)
		{

			while (innerMostTrack <= 57)
			{

				putchar(outerTrack);
				putchar(innerTrack);
				putchar(innerMostTrack);
				if (!(innerMostTrack == 57 && innerTrack == 56 && outerTrack == 55))
				{
					putchar(',');
					putchar(' ');
				}

				innerMostTrack++;
			}
			innerTrack++;
			innerMostTrack = innerTrack + 1;
		}

		outerTrack++;
		innerTrack = outerTrack + 1;
		innerMostTrack = outerTrack + 2;
	}

	putchar('\n');

	return (0);
}
