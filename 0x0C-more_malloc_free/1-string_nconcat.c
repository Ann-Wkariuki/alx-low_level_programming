#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 *string_nconcat - len of 1st str, len of 2nd str, if n < 2nd, 2nd = n
 *2nd + 1st = total len, malloc + null byte, loop to insert into temp arr
 * @s1: input one
 *@s2: input two
 *@n: s2's number of bytes
 *Return: 0
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int s1_len, s2_len, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (s1_len = 0; s1[s1_len] != '\0'; s1_len++)
		;

	for (s2_len = 0; s2[s2_len] != '\0'; s2_len++)
		;

	str = malloc(s1_len + s2_len + 1);

	if (n >= s2_len)
		n = s2_len;

	for (i = 0; s1[i] != '\0'; i++)
		str[i] = s1[i];

	for (i = 0; i < n; i++)
		str[s1_len + i] = s2[i];

	str[s1_len + n] = '\0';

	if (str == NULL)
		return (NULL);

	return (str);
}
