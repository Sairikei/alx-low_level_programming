#include "holberton.h"
#include <stdlib.h>
/**
 *malloc_checked - allocate memory, check
 *a blank line
 *@b: bits to allocate
 *Description: allocates memory
 *section header: holberton.h is the functions header
 *
 *Return: this is void , no return
 */
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);

	return (p);
}
