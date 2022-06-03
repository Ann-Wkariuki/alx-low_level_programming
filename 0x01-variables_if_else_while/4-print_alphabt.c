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

	for (ann = 'a'; ann <= 'z'; ann++)
	{
		if (ann != e && ann != q)
			putchar(ann);
	}
	printf("\n");

	return (0);

}
