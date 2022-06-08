#include <stdio.h>
#include "main.h"
/**
 *print_alphabet - prints lowercase lphabets
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
		_putchar(ann);
	}
	_putchar('\n');
}
