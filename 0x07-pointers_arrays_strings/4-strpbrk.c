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

		for (n = 0; accept[n] != '\0'; n++)/*declaring for*/
		{
			if (s[i] == accept[n])/*[i] == accept[n]*/
				return (s + i);/*return s+1*/
		}
	}

	return (NULL);/*return null value*/
}
