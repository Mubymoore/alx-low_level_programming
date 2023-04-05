#include "main.h"

/**
 * factorial - function to calculate the factorial of a given number
 * @n: integer argument to find the factorial of
 *
 * Return: returns the factorial of the given number
 */
int factorial(int n)
{
	if (n == 0)
		return (1);
	if (n < 0)
		return (-1);

	return (n * factorial(n - 1));
}
