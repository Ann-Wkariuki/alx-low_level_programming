#include "main.h"
/**
 *get_bit - Gets the value of a bit at a given index.
 *@n: The bit.
 *@index: The index to get the value at - indices start at 0.
 *
 *Return: If an error occurs - -1.
 *      Otherwise - The value of bit at index.
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *)&i;

	return (*c);
}
