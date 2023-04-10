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
	int digit_found = 0;

	while (*s)
	{
		if (*s == '-' && !digit_found)
		{
			sign = -1;
		}
		else if (*s >= '0' && *s <= '9')
		{
			result = result * 10 + (*s - '0');
			digit_found = 1;
		}
		else if (digit_found)
		{
			break;
		}
		s++;
	}
	return (sign * result);
}
