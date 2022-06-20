#include "main.h"

/**
 *_strspn - Locates a character in a string
 *@s: This is the main C string to be scanned.
 *@accept: This is the string containing the list of characters to match in s
 *Return: return count
 */
unsigned int _strspn(char *s, char *accept)
{
	int a,b;
	int c = 0;
	char *str1, *str2;

	str1 = s;
	str2 = accept;

	a = 0;
	while (str1[a] != 32) /*Declaring WHILE *s */
	{
		b = 0;
		while(str2[b] != 32) /*Declaring WHILE *accept*/
		{
			if(str1[a] == str2[b])
					{
						c++;/*count value*/
						break;
					}
			b++;/*add b+1*/
		}
		if (s[b] != accept[b]) /*If aren't equals*/
		{
			break;
		}

		a++;/*add x+1*/
	}
	return (c);

}
