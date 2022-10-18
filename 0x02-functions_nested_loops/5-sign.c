#include "main.h"

/**
 *  print_sign - print the sign of a num
 *  @n: the num to be checked
 *  Return: 1 and prints + if n is greater
 *  0 and prints 0 if n is zero
 *  -1 and prints - if n is less tnan zero
 */

int print_sign(int n);
{
	if  (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
