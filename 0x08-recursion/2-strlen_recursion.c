#include "main.h"
/**
 * _strlen_recursion - Returns the length of a string.
 * @st: The string to be measured.
 *
 * Return: The length of the string.
 */
int _strlen_recursion(char *st)
{
	int lenght = 0;

	if (*st)
	{
		lenght++;
		lenght += _strlen_recursion(st + 1);
	}
	return (lenght);
}
