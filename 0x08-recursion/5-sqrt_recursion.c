#include "main.h"
#include <stdio.h>

int squareroot(int n, int y);
/**
 * _sqrt_recursion - gets sqrt by recursion
 * @n: num to get the sqrt
 *
 * Return: sqrt(n)
 */
int _sqrt_recursion(int n)
{
	int a = squareroot(n, 1);

	return (a);
}

/**
 * squareroot - finds the square of a num
 * @n: num
 * @y: guesses
 *
 * Return: sqrt of n
 */
int squareroot(int n, int y)
{
	if (n == 1)
		return (1);
	if (y > n / 2)
		return (-1);
	if (y * y == n)
		return (y);
	return (squareroot(n, y + 1));
}
