#include "lists.h"
#include <stdlib.h>

/**
 * Add_nodeint_end - Adds a new node at the end of a listint_t list.
 *
 * @head: Double pointer to the head of the list.
 * @n: int add the list
 * Return: NULL if it failed.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = NULL;
	listint_t *tmp = *head;

	new = (listint_t *)malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}

		tmp->next = new;
	}

	return (new);
}

