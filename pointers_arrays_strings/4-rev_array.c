#include "main.h"
#include <stdio.h>

/**
* reverse_array - function for reversing
* @a: array
* @n: value
*/
void reverse_array(int *a, int n)
{
	int len = n;
	int *p = a;
	int *q = a;
	int temp;
	int i;

	for (i = 0; i < n; i++)
	{
		q++;
	}
	q--;
	while (len > 1)
	{
		temp = *p;
		*p = *q;
		*q = temp;
		p++;
		q--;
		len = len - 2;
	}
}
