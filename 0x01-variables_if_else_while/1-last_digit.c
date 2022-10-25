#include <stdlib.h>
#include <time.h>
#include <stdio.h>>

/**
 * main -> entry point
 * @void: no arguments
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	int Lastdigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	Lastdigit = n % 10;

	if (Lastdigit > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, Lastdigit);

	if (Lastdigit == 0)
		printf("Last digit of %d is 0 and is 0\n");

	if (Lastdigit < 6 && x != 0)
	{
		int 1 = Last digit;

		printf("Last digit of %d and is less than 6 and not 0\n", n, 1);
	}

	return (0);
}
