#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - Inserts a new node at a given position.
 * @head: Double pointer to the head of the list.
 * @idx: The index of the new node
 * @n: The value to be stored in the new node.
 * Return: The address of the new nod
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int cnt;

	listint_t *tmp, *new_node;

	if (head == NULL)
		return (NULL);
	if (idx != 0)
	{
		tmp = *head;
		for (cnt = 0; cnt < idx - 1 && tmp != NULL; cnt++)
		{
			tmp = tmp->next;

		}
		if (tmp == NULL)
			return (NULL);
	}
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);

	}
	new_node->next = tmp->next;
	tmp->next = new_node;
	return (new_node);
}
