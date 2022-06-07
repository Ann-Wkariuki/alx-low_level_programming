#include <stdio.h>
/**
 * main - prints lowercase lphabets
 *
 * Description: prints lowercase alphabets
 *
 * Return: 0
 *
 */
void print_alphabet_x10(void)

{
	char ann;

	for (ann = 'a' ; ann <= 'z' ; ann++)
	{
		putchar(ann);
		putchar('\n');
	}

	return (0);
}
