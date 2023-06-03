#include "main.h"
#include <stdio.h>
/**
 * print_most_numbers - a function that prints the numbers, from 0 to 9,
 *
 * Return: 0-9, excluding 2 and 4, followed by a newline
 */
void print_most_numbers(void)
{
int c;
for (c = 48; c <= 57; c++)
{
if (c == 50 || c == 52)
continue;
putchar(c);
}
putchar('\n');
}
