#include "main.h"

 /**
 *_strlen - Returns the length of a string
 *@s: pointer to the string
 *
 *The function return the length of a string
 *
 *Return: The length of the string
 */

int _strlen(char *s)
{
        int length = 0;

        while (*s != '\0')
        {
                length++;
                s++;
        }
        return (length);
}
