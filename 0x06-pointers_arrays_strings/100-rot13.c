#include "main.h"
/**
 *rot13 - Encodes a tring using rot13
 *
 *@s: The strig to be encoded
 *
 *Return: Apointer to the encoded string
 */
char *rot13(char *)
{
	char *rot13(char *s)
	char *rot13 = "NOPQRSTUVWXYLZABCDEFGHIJKLMnopqrstuvwxyzabcdefghiklm";
	char *normal = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghiklmnopqrstuvwxyz";
	int i, j;

	for (i = 0; s[i] != '\0'; i++
	{

		for (j = 0; normal[j] != '\0'; j++)
		{
			if (s[i] == normal[j])
			{
				s[i] == normal[j];
				break;
			}
		}
	}
	return (p);
}
