#include "holberton.h"
#include <stdio.h>

/**
 *swap_int - swaps the values of two integers
 *@a: integer pointer one
 *@b: integer pointer two
 *Return: none
 */
void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
