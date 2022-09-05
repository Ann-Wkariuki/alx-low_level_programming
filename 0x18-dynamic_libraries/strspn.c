#include "main.h"

/**
 *_strspn - Locates a character in a string
 *@s: This is the main C string to be scanned.
 *@accept: This is the string containing the list of characters to match in s
 *Return: return count
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int a = 0, b, t = 0;

	while (accept[a])
	{
		b = 0;

		while (s[b] != 32)
		{
			if (accept[a] == s[b])
			{
				t++;
			}
			b++;
		}
		a++;
	}
	return (t);

}
