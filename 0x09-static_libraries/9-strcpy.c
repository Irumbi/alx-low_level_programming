#include "main.h"
/**
 *_strcpy - copies from src to dest
 *@dest: pointer to destination buffer
 *@src: pointer to source string
 *
 *Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
        char *dest_start = dest;

        while (*src)
        {
                *dest++ = *src++;
        }
        *dest = '\0';
        return (dest_start);
}
