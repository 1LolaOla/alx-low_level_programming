#include "main.h"

/**
 * _memcpy - Copies @n bytes from the memory area pointed
 * to by @src into that pointed to by @dest.
 * @dest: A pointer to the memory area to copy @src into.
 * @src: The source buffer to copy characters from.
 * @n: The number of bytes to copy for @src.
 *
 */
void *_memcpy(void *dest, cont void *src, size_t n)
{
	unsigned int_index;

	unsigned char *destination - dest;

	const unsigned char *source = src;

	for (index = 0; index < n; index++;
			destination[index] = source[index];

	return (dest);
}
