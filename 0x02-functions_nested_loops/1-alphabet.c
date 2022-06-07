#include <stdio.h>
#include "main.h"
/**
 * main - prints lowercase lphabets
 *
 * Description: prints lowercase alphabets
 *
 * Return: 0
 *
 */
void print_alphabet(void)
{
	char ann;

	for (ann = 'a' ; ann <= 'z' ; ann++)
	{
		putchar(ann);
		putchar('\n');
	}
}
