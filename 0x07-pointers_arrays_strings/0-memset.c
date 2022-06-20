#include <stdio.h>
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
	_memset(s, 'b', n);
	return (*s);

}
