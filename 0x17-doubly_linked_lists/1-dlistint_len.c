#include "lists.h"

/**
 * dlistint_len - length of double linked list
 * @h: head node
 *
 * Return: length of linked list
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t num_of_elements = 0;
	const dlistint_t *temp = h;

	while (temp != NULL)
	{
		num_of_elements++;
		temp = temp->next;
	}

	return (num_of_elements);
}
