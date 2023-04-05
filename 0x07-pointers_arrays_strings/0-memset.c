#include "main.h"
/**
 *char *_memset - fills memory with a constant byte
 *@s: pointer to the memory area to be filled
 *@b: value for each byte to be filled
 *@n: the number of bytes to be filleed
 *
 *Return: pointer to return 1 on sucess and 0 on error
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n--)
	{
		*p++ = b;
	}
	return (s);
}
