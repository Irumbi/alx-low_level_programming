#include "main.h"
/**
 *_strspn - Gets thr length of a prefix substring
 *@s: pointer to the string to search
 *@accept: pointer to the string
 *
 *Return:no of bytes in initial segment
*/
unsigned int _strspn(char *s, char *accept)
{
        unsigned int i, j;
        unsigned int len = 0;

        for (i = 0; s[i]; i++)
        {
                for (j = 0; accept[j]; j++)
                {
                        if (s[i] == accept[j])
                        {
                                len++;
                                break;
                        }
                }

        if (!accept[j])
                break;
        }
        return (len);
}
