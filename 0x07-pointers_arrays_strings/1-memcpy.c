#include "main.h"
/**
 *_memcpy - copy memory area
 *@dest: pointer to destination area
 *@src: pointer to source area
 *@n: number of bytes to copy
 *
 *Descripton: copy bytes from memory area
 *Return: a pointer to the destination memeory area
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *dest_ptr = dest;
	char *src_ptr = src;

	while (n > 0)
	{
		*dest_ptr = *src_ptr;
		dest_ptr++;
		src_ptr++;
		n--;
	}
	return (dest);
}
