#include "main.h"
/**
 *_strpbrk - matches any character specified
 *@s: This is the C string to be scanned
 *@accept:character in str1 that matches one of the characters in str2
 *Return: string s that matches any character specified in accept
 */
char *_strpbrk(char *s, char *accept)
{
	int j, n;

	for (i = 0; s[i] != '\0'; i++)/*declaring for*/
	{

		for (n = 0; accept[n] != '\0'; n++)
		{
			if (s[i] == accept[n])/* evaluating s and n*/
				return (s + i);/*return value*/
		}
	}

	return (NULL);
}
