#include "main.h"
/**
 * _isdigit - checks whetherthe value entered is a digit
 * @c: the entered value
 * Return: returns 1 if the value is a digit ,0 otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)

		return (1);
	else
		return (0);
}
