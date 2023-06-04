#include "main.h"
#include <stdio.h>
/**
 * swap_int - a function that prints the value of two integers
 * @a: points to first input
 * @b: points to second input
 * Return: integers
 */
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;

}
