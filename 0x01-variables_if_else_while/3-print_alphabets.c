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
	int startUpper;

	startLower = 97;
	startUpper = 65;

	while (startLower <= 122)
	{
		putchar(startLower);
		startLower++;
	}

	while (startUpper <= 90)
	{
		putchar(startUpper);
		startUpper++;
	}

	putchar('\n');

	return (0);
}
