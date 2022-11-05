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
int main(int argc, __attribute__((unused)) char **argv)
{
	printf("%d\n", argc - 1);
	return (0);
}
