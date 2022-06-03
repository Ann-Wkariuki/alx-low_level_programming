#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/**
 * main - prints all letters except e and q
 *
 * Description: prints all letters except e and q
 *
 * Return: 0
 *
 */
int main(void)
{
	char ann, e, q;

	e = 'e';
	q = 'q';

	for (low = 'a'; low <= 'z'; low++)
	{
		if (low != e && low != q)
			putchar low;
	}
	printf("\n");

	return (0);

}
