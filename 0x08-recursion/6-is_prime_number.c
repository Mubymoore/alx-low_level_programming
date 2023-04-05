#include "main.h"

/**
 * checker - checks if a number is only divisible by itself
 * @n: integer to be checked
 * @y: factor to be used to check the integer
 *
 * Return: returns 1 if the integer is a prime number otherwise
 * returns 0
 */
int checker(int n, int y)
{
	if (n == y)
		return (1);
	if (n % y == 0)
		return (0);
	return (checker(n, y + 1));
}

/**
 * is_prime_number - function to check if an integer is a prime number
 * or not
 * @n: integer to be checked (passed into the function
 *
 * Return: returns 1 if the integer is a prime number otherwise
 * returns 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (checker(n, 2));
}
