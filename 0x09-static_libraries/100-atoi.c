0-100-atoi.c
#include "main.h"
/**
 *_atoi - converts string to an integer
 *
 *@s: the value to convert
 *
 *Return: on success sign times result, otherwise o
 */
int _atoi(char *s)
{
        int result = 0;
        int sign = 1;
        int encountered_digit = 0;

        while (*s)
        {
                if (*s == '-')
                {
                        sign = -1;
                }
                else if (*s >= '0' && *s <= '9')
                {
                        result = result * 10 + (*s - '0');
                        encountered_digit = 1;
                }
                else if (encountered_digit)
                {
                        break;
                }
                s++;
