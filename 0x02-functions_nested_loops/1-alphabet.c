#include "main.h"

/**
 * print_the_alphabet - print the alphabet in lowercase
*/

void print_the_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
}