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
	int startLower;

	startLower = 97;

	while (startLower <= 122)
	{
		if (!(startLower == 101 || startLower == 113))
			putchar(startLower);

		startLower++;
	}

	putchar('\n');

	return (0);
}
