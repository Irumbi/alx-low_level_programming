#include <stdio.h>
/**
 * main - print sizes of the various types on the computer
 * Return: 0
*/
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	Printf("size of a char: %lu byte(s)\n", (unsigned long)sizeof(a));
	Printf("size of a int: %lu byte(s)\n", (unsigned long)sizeof(b));
	Printf("size of a long int: %lu byte(s)\n", (unsigned long)sizeof(c));
	Printf("size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(d));
	Printf("size of a float: %lu byte(s)\n", (unsigned long)sizeof(e));

	return (0);
}
