#include "main.h"
/**
 *_strcmp - compares two strings
 *
 *@s1: the first dtring to compare
 *@s2: the second string to compare
 *
 *Return: An integer less than, equal to, or greater than zero if s1 is found
 *else s2
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}
	if (s1[i] == s2[i])
		return (0);
	else if (s1[i] < s2[i])
		return (-1);
	else
		return (i);
}
