#include "lists.h"

/**
 * listint_len - The number of elements in a linked listint_t list.
 * @h: Pointer to the head of the list.
 *
 * Return: The number of elements in the list.
 */
size_t listint_len(const listint_t *h)
{
	size_t node_cnt = 0;

	while (h != NULL)
	{
	h = h->next;
		node_cnt++;
	}

	return (node_cnt);
}
