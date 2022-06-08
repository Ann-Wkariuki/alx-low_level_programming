#include "main.h"
/**
 * _isalpha - prints 1 if the value entered is an alphabet
 *
 * Description: prints one if a value is an alphabet
 *
 * Return: 1 if value is an alphabet,0 otherwise
 *
 */
int _isalpha(int c)
{
	if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
