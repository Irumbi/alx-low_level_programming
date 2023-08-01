#include "lists.h"
#include <stdio.h>

/**
 * get_loop_length - calculates the length of a loop in a linked list
 * @head: pointer to the head of the linked list
 *
 * Return: the number of nodes in the loop, or 0 if there is no loop
 */
size_t get_loop_length(const listint_t *head)
{
	const listint_t *slow_ptr, *fast_ptr;
	size_t loop_length = 1;

	if (head == NULL || head->next == NULL)
	return (0);

	slow_ptr = head->next;
	fast_ptr = head->next->next;

	while (fast_ptr != NULL)
	{
	if (slow_ptr == fast_ptr)
	{
		slow_ptr = head;
		while (slow_ptr != fast_ptr)
		{
		loop_length++;
		slow_ptr = slow_ptr->next;
		fast_ptr = fast_ptr->next;
		}

		slow_ptr = slow_ptr->next;
		while (slow_ptr != fast_ptr)
		{
		loop_length++;
		slow_ptr = slow_ptr->next;
		}

		return (loop_length);
	}

	slow_ptr = slow_ptr->next;
	fast_ptr = fast_ptr->next->next;
}

	return (0);
}

/**
 * print_listint_safe - Prints a listint_t list safely.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t loop_length, i;

	loop_length = get_loop_length(head);

	if (!loop_length)
	{
		for (; head != NULL; loop_length++, head = head->next)
			printf("[%p] %d\n", (void *)head, head->n);
	}
	else
	{
		for (i = 0; i < loop_length; i++, head = head->next)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			if (i == loop_length - 1)
				printf("-> [%p] %d\n", (void *)head, head->n);
		}	
	}

	return (loop_length);
}
