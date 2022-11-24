#include "lists.h"

/**
 * print_list - prints a linked list
 * @h: head of linked list
 *
 * Return: length of list
 */

size_t print_list(const list_t *h)
{
	int i = 0;
	const list_t *temp = h;

	while (temp != NULL)
	{

		if (temp->str == NULL)
		{
			printf("[0] (nil)\n");
			temp = temp->next;
			i++;
		}
		else
		{
			printf("[%d] %s\n", temp->len, temp->str);
			temp = temp->next;
			i++;
		}
	}
	return (i);
}
