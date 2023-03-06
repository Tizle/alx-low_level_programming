#include "main.h"

/*
 * _memset - fills memory with constant byte
 * @char *s: pointer
 * @char b: constant byte
 * @n: bytes of the memory
 * Return: pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return(s);
}
