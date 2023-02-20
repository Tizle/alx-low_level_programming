#include <stdio.h>
/**
 * main -print out sizes of data type in c
 * Return: 0
*/
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	printf("size of a char: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("size of an int: %lu byte(s)\n", (unsigned long)sizeof(b));
	printf("size of a long int: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("size of a long long int: %lu byte(s)", (unsigned long)sizeof(d));
	printf("size of a float int: %lu byte(s)", (unsigned long)sizeof(f));
	printf("gcc 6-size.c -m32 -o size32 2> /tmp/32")
	pritf("gcc 6-size.c -m64 -o size64 2> /tmp/64")
	return (0);
}
