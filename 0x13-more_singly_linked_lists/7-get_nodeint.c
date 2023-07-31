#include "lists.h"
/**
 * get_nodeint_at_index - the nth node of a listint_t linked list.
 * @head: pointer to the first node.
 * @index: indes is the index of the node.
 *
 * Return: pointer of the index.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int cnt;

	if (head ==  NULL)
		return (NULL);
	for (cnt = 0; cnt < index; cnt++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}
