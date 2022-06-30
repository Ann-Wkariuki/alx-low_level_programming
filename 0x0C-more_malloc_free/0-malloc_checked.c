#include <stdlib.h>
#include "main.h"
/**
 *malloc_checked - Entry Point
 *@b: input amount
 *Return: pointer to new mem
 */
void *malloc_checked(unsigned int b);
{
	char *ip;

	ip = malloc(b);
	if (ip == NULL)
	{
		exit(98);
		return (NULL);
	}
	return (ip);
}
