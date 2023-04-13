#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - creates and allocate a memory space
 * using malloc
 * @b: size of the memory space
 *
 * Return: returns 98 on error except return x
 */
void *malloc_checked(unsigned int b)
{
	void *x;

	x = malloc(b);
	if (x == NULL)
		exit(98);

	return (x);
}
