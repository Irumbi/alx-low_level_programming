#include "main.h"

/**
 *_strchr - locates a character in a string
 *
 *@s: the string to search
 *@c: the character to locate
 *
 *Return: c on suceess or 0 on otherwise
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
	s++;
	}
	if (*s == c)
	{
		return (s);
	}
	else
	{
		return (0);
	}
}
