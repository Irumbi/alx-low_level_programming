#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - Deletes the head node of a listint_t list
 * @head: Double pointer to the head of the list.
 * Return: 0 if the list is empty.
 */
int pop_listint(listint_t **head)

{
	int n;
	listint_t *start;

	if (head == NULL || *head == NULL)
		return (0);
	start = *head;
	*head = start->next;
	n = start->n;
	free(start);
	return (n);

}
