#include "main.h"

/**
 * _pow_recursion - raises x to power y
 * @x: x param
 * @y: y param
 *
 * Return: result of x^y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	if (y == 1)
		return (x);
	return (x * _pow_recursion(x, y - 1));
}
