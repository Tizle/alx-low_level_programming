#include <stdlib.h>
#include <time.h>
#include <stdio>

/**
 * main -determines if a number is positive, negetive or zero
 *
 *Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand - RAND_MAX / 2;
	if (n > 0)
	{
		pritf("%d is postive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negetive", n);
	}
	return (0)
}
