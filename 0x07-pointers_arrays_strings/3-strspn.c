#include "main.h"

/**
 * _strspn - Calculates the length of a prefix substring.
 * @s: initial segment
 * @accept: input
 *
 * Return: number of bytes in the initial segment
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				n++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (n);
		}
		s++;
	}
	return (n);
}
