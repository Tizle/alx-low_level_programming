#include "main.h"

/**
 * _islower - cheks if charecter islowercase
 *
 * @c: character to be tested
 *
 * Return:1 if @c is lowercase, otherwise 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);

}
