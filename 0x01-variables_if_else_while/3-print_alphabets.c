#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - prints alphabets in lowercase and uppercase
 *
 * Description: prints alphabets in lower nd upper case
 *
 * Return: 0
 *
 */
int main(void)
{
	char low;

	for (low = 'a'; low <= 'z'; low++)
		putchar(low);
	for (low = 'A'; low <= 'Z'; low++)
		putchar(low);
	putchar('\n');
	return (0);
}
