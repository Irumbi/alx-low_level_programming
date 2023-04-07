#include "main.h"
/**
 *_strlen - calculate the lenth of a string recursively
 *@s: pointer to the string
 *
 *Return: the length of the string
 */
int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	return (_strlen(s + 1) + 1);
}

/**
 *is_palindrome_helper - check if a string is a palindrome
 *@s: pointer to the string
 *@start: starting the index of the string
 *@end: ending the index of the string
 *
 *Return: on success 1, otherwise 0
 */
int is_palindrome_helper(char *s, int start, int end)
{
	if (start >= end)
		return (1);
	if (s[start] != s[end])
		return (0);
	return (is_palindrome_helper(s, start + 1, end - 1));
}

/**
 *is_palindrome - check if a string is a palindrome
 *@s: pointer to the string
 *
 *Return: on sucess 1, otherwise 0
 */
int is_palindrome(char *s)
{

	if (*s == '\0')
		return (1);
	return (is_palindrome_helper(s, 0, _strlen(s) - 1));
}
