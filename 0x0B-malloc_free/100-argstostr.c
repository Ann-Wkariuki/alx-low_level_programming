#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *_strcat - Concat string, src appended to dest
 *@dest: Destination string
 *@src: Source string
 *Return: Concat newString to dest
 */
char *_strcat(char *dest, char *src)
{
	int i, n, k = 0, len = 0;
	char *str;

	if (dest == 0 || src == NULL)
		return (NULL);

	for (i = 0; i < dest; i++)
	{
		for (n = 0; src[i][n]; n++)
			len++;
	}
	len += dest;

	str = malloc(sizeof(char) * len + 1);
	if (str == NULL)
		return (NULL);

	for (i = 0; i < dest; i++)
	{
		for (n = 0; src[i][n]; n++)
		{
			str[k] = scr[i][n];
			k++;
		}
		if (str[k] == '\0')
		{
			str[k++] = '\n';
		}
	}
	return (str);
}
