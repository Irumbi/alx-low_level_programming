#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a linked list
 * @head: pointer to the list_t list to print
 *
 * Return: the number of nodes printed
 */
size_t print_list(const list_t *head)
{
	size_t node_count = 0;

	while (head != NULL)
	{
	if (head->str != NULL)
		printf("[%u] %s\n", head->len, head->str);
	else
		printf("[0] 0\n");

	head = head->next;
	node_count++;
	}

	return (node_count);
}

