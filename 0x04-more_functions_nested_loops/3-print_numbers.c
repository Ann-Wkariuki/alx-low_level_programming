#include "main.h"

/**
 *print_numbers - prints number starting with 0 to 9
 *Return: returns 0 to 9 followed by a newline
 */

void print_numbers(void)
{
	int a;

	for (a = 0; a <= 9; a++)
		_putchar(a + '0');
	_putchar('\n');
}
