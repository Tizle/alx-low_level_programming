#include "main.h"

/*
 * _memset - fills memory with constant byte
 * @s: pointer
 * @b: constant byte
 * @n: bytes of the memory
 *
 * Return: pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
