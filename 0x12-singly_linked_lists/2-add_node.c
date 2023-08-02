#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"


/**
 * _strlen - function that returns the length of a string.
 * @s : s is a character
 * Return: value is n
 */
int _strlen(const char *s)
{
	int n = 0;


	while (s[n] != '\0')
	{
		n++;
	}
	return (n);
}


/**
 * add_node - add a new node at beginning of a list_t list.
 * @head: head of a list_t list.
 * @str: value to insert into element.
 * Return: the number of nodes.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *_add;


	_add = malloc(sizeof(list_t));
	if (_add == NULL)
		return (NULL);
	_add->str = strdup(str);


	_add->len = _strlen(str);
	_add->next = *head;
	*head = _add;


	return (_add);
}
