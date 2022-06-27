#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 *str_concat - get ends of input and add together for size
 *@s1: input one to concat
 *@s2: input two to concat
 *Return: concat of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	int i, l1, l2;
	char *str;

	l1 = s1 == NULL ? 0 : strlen(s1);
	l2 = s2 == NULL ? 0 : strlen(s2);
	str = malloc(l1 + l2 + 1);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < l1; i++)
		str[i] = s1[i];
	for (i = 0; i < l2; i++)
		str[l1 + i] = s2[i];
	return (str);
}
