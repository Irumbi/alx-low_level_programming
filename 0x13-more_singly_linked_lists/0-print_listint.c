#include "lists.h"
#include <stdio.h>
/**
 * print_listint - print all elements of a listint_t list
 *
 * @h: head of linked list
 *
 * Return: Number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t node_cnt = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		node_cnt++;

	}
	return (node_cnt);
}
