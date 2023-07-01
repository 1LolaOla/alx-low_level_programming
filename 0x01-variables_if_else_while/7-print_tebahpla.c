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

	num = 122;

	while (num >= 97)
	{
		putchar(num);
		num--;
	}

	putchar('\n');

	return (0);
}
