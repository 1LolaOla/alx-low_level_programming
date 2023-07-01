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
	int num;

	num = 48;

	while (num <= 57)
	{
		putchar(num);
		num++;
	}

	putchar('\n');

	return (0);
}
