#include "main.h"
/**
 * factorial - returns the factorial of a number
 * @nu: number to return the factorial from
 *
 * Return: factorial of nu
 */
int factorial(int nu)
{
	if (nu < 0)
		return (-1);
	if (nu == 0)
		return (1);
	return (nu * factorial(nu - 1));
}

