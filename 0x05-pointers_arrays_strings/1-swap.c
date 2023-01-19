#include "main.h"
/**
 * swap_int - swap two int variables
 * @a: interger variable
 * @b: integer variable
 * Return: nothing
 *//*  */
void swap_int(int *a, int *b)
{

	int temp = *a;
	*a = *b;/*  */
	*b = temp;
}
