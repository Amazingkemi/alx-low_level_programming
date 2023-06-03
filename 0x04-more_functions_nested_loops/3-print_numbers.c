#include "main.h"
#include <stdio.h>
/**
 * print_numbers - a  function that printsthe numbers, from 0-9
 *
 * Return: 0-9 followed by a newline
 */
void print_numbers(void)
{
int c;
for (c = 48; c <= 57; c++)
{
putchar(c);
}
putchar('\n');
}
