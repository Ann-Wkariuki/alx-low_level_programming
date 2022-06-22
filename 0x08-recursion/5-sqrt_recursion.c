#include <stdio.h>
#include "main.h"

int squareroot(int n, int i);
/**
 *_sqrt_recursion - no loop, 1. 2nd function - checks for perfect square
 * @n: input
 *Return: Always 0 (Success)
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
/**
 *squareroot - checks if perfect square
 *@n: input
 *@i: counter
 *Return: if square root
 */
int squareroot(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
		return (-1);

	if (sqrt == n)
		return (i);

	return (_sqrt(n, i + 1));
}
