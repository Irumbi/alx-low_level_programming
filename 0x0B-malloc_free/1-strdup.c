#include "main.h"
#include <stdlib.h>

/**
 *_strdup - Returns apointer to newly created space
 *
 *@str: The string to duplicate.
 *
 *Return: On sucess pointer to the duplicate, or 0 Otherwise
 */
char *_strdup(char *str)
{
	char *dup_str;

	unsigned int len, i;


	if (str == 0)
		return (0);
	len = 0;

	while (str[len] != '\0')
		len++;
	dup_str = malloc(sizeof(char) * (len +1));
	if (dup_str == 0)
		return (0);
	for (i = 0; i <= len; i++)
		dup_str[i] = str[i];
	return (dup_str);
}
