#include "holberton.h"

/**
 *factorial - functions that return a factorial of a number
 *
 *@n: number to be checked
 *Return: return -1 if less than 0
 */
int factorial(int n)
{
	{
		if (n < 0)
			return (-1);
	}
	{
		if (n <= 1)
			return (n);
	}
	return (n * factorial(n - 1));
}
