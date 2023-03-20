#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 *main -Entry point
 *Description- 'check if the number is positive, negative or zero'
 *Return: 0
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		print("%d is positive number\n", n);
	}
	else if (n == 0)
	{
		print("%d is zero number\n", n);
	}
	else
	{
		print("%d is negative number\n", n);
	}
	return (0);
}
