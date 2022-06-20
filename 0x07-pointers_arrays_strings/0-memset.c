#include "main.h"
/**
 *_memset - replaces a memory space with a character
 *@b: the value to be copied in the memory
 *@n: the number of times
 *@s: sstring to be replaced
 *Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	unsigned char *m = s, b = c;

	for (i = 0; i < n; i++)
		m[i] = b;

	return (m);
}
