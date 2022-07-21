#include "main.h"
/**
 *get_endianness - Gets the password
 *Return: If an error occurs - -1.
 *
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *)&i;

	return (*c);
}
