#include "main.h"
/**
 * _print_rev_recursion - Prints a string in reverse.
 * @st: The string to be printed.
 */
void _print_rev_recursion(char *st)
{
	if (*st)
	{
		_print_rev_recursion(st + 1);
		putchar(*st);
	}
}
