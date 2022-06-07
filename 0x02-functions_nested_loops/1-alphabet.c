#include <stdio.h>
/**
 * main - prints lowercase lphabets
 *
 * Description: prints lowercase alphabets
 *
 * Return: 0
 *
 */
int main()
{
	char ann;

	for (ann = 'a' ; ann <= 'z' ; ann++)
	{
		putchar(ann);
		putchar('\n');
	}

	return (0);
}
