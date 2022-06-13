#include "main.h"
/**
 *swap_int - swaps two integers
 *@a: input
 *@b: input
 *return: integers
 */
void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
