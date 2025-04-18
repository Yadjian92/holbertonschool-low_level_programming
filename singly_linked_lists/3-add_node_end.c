#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_node_end - Adds a new node at the end of a linked list.
 * @head: Double pointer to the head of the linked list.
 * @str: String to be duplicated and added to the new node.
 *
 * Return: Address of the new element, or NULL if it failed.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int lenght = 0;

	list_t *new_node = malloc(sizeof(list_t));
	list_t *lastnode = *head;

	if (new_node == NULL)
	return (NULL);

	while (str[lenght] != '\0')
	lenght++;

	new_node->str = strdup(str);

	if (strdup(str) == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = lenght;
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;

	else
	{
		while (lastnode->next != NULL)
		{
			lastnode = lastnode->next;
		}

		lastnode->next = new_node;
	}
	return (new_node);
}
