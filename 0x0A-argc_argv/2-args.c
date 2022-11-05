#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Function that prints the arguments it receives
 * @argc: arguments counted
 * @argv: elements
 *
 * Return: void
 */

int main(int argc, char **argv)
{
	int i;

	if (argc >= 1)
		for (i = 0; i < argc ; i++)
			printf("%s\n", argv[i]);
	return (0);
}
