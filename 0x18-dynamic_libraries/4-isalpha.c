#include "main.h"

/**
 * _isalpha -checks for char alphabet
 * @c: character to be checked
 *
 * Return: 1 if character is a letter lower or upper, 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	return (0);
}
