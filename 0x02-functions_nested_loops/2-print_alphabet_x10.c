#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - - prints lowercase alphabets 10 times
 *
 * Description: prints alphabets ten times
 *
 * Return: 0
 *
 */
void print_alphabet_x10(void)
{
	int i;
	char ann;

	for (i = 0; i < 10; i++)
	{
		for (ann = 'a'; ann <= 'z'; ann++)
			putchar(ann);
		{
			putchar('\n');
		}
	}
}
