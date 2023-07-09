include "main.h"
/**
 *_strpbrk - searches a string for any set of bytes
 *@s: String to Search
 *@accept: String to cmpare
 *
 *Description: search bytes from string s
 *Return: pointer to string s on success or 0 otherwise
 */
char *_strpbrk(char *s, char *accept)
{
        unsigned int i, j;

        for (i = 0; s[i] != '\0'; i++)
        {
                for (j = 0; accept[j] != '\0'; j++)
                {
                        if (s[i] == accept[j])
                        {
                                return (s + i);
                        }
                }
        }
        return (0);
}
