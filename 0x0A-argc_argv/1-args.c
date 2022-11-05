#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Function that prints the number of arguments it received
 * @argc: number of arguments
 * @argv: elements
 *
 * Return: void (empty)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	printf("%s\n", argv[i]);

	return (0);
}
