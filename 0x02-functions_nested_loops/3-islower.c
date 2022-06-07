#include <stdio.h>
#include "main.h"
/**
 * _islower - checks for lower case letters
 *
 * Description: checks for loercase letters
 *
 * Return: 1 if int c is lowercase, 0 if otherwise 
 *
 */
int _islower(int r)
{
	if ((c >= 97) && (c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
