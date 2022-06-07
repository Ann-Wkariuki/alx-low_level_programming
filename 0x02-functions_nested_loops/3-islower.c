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
	if (r >= 'a' && r <= 'z')
		return (1);
	else
		r = _islower('H');
	 _putchar(r + '0');
	 r = _islower('o');
	 _putchar(r + '0');
	 r = _islower(108);
	  _putchar(r + '0');
	  _putchar('\n');
		return (0);
}
