#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main -  assign a random number to the variable n each time it is executed.
 *Return: always 0
 */
int main(void)
{
	int n;
	int a;

	sand(time(0));
	n = rand() - RAND_MAX / 2;
	a = % n 10

	if (a > 5)
	{
		printf("Last digit of %d is %d ad is greater than5\n", n, a);
	}
	else if (a == 0)
	{
		printf("Last digit of %d is %d and is 0", n, s);
	}
	else 
	{
		ptintf("Last digit of %d is %d and is less than 6 and not 0\n", n, a);
	}
	return (0);
}
