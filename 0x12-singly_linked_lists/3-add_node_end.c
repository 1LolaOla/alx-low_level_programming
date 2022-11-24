#include "lists.h"

/**
 * add_node_end - add element to end of linked list
 * @head: pointer to pointer to first element
 * @str: string to add
 *
 * Return: address of first element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	int size = 0;
	char *s = strdup(str);
	list_t *temp;
	list_t *newnode;

	if (s == NULL)
		return (NULL);

	while (s[size] != '\0')
		size++;

	newnode = malloc(sizeof(list_t));

	if (newnode == NULL)
		return (NULL);

	newnode->len = size;
	newnode->str = s;

	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}

	temp = *head;

	while (temp->next != NULL)
	{
		temp = temp->next;
	}

	temp->next = newnode;

	return (newnode);
}
