#include "main.h"

/**
 * multiply - multiplies a number by itself to find out if it
 * will be equal to n
 * @n: number to be tested against
 * @m: integer to multiply continously
 *
 * Return: returns the integer if it equals n else returns -1
 */
int multiply(int n, int m)
{
	if (m * m == n)
		return (m);
	if (m == n / 2)
		return (-1);
	return (multiply(n, m + 1));
}


/**
 * _sqrt_recursion - calculates the square root of a number
 * @n: integer argument passed into the function
 *
 * Return: returns the natural square root of a number
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	return (multiply(n, 1));
}
