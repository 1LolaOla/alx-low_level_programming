#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Program that predicts change from coin
 * @argc: Argument counted
 * @argv: Element
 *
 * Return: void (empty)
 */

int main(int argc, char *argv[])
{
	int i, number, cents = 0, coin[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	number = atoi(argv[1]);

		for (i = 0; i < 5; i++)
		{
			if (number / coin[i] > 0)
			{
				cents += number / coin[i];
				number = number % coin[i];
			}
		}
		printf("%d\n", cents);
	return (0);
}



