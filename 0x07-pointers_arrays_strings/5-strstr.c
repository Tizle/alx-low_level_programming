#include "main.h"

/**
 * _strstr - locates a substring.
 * @haystack: string to be scanned
 * @needle: string to be searched with-in haystack string
 * Return: pointer to substring or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *p = needle;

		while (*l == *p && *p != '\0')
		{
			l++;
			p++;
		}

		if (*p == '\0')
			return (haystack);
	}

	return (0);
}
