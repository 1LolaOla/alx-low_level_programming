#include "lists.h"

/**
 * print_dlistint - print double linked list
 * @h: head node
 *
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t number_of_nodes = 0;
	const dlistint_t *temp = h;

	while (temp != NULL)
	{
		number_of_nodes++;
		printf("%d\n", temp->n);
		temp = temp->next;
	}

	return (number_of_nodes);
}
