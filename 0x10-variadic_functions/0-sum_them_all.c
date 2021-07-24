#include "variadic_functions.h"
#include <stdarg.h>

/**
 *sum_them_all -  sum all arguments
 *@n: int, number of undefined arguments
 *
 *Return: sum of args
 *On error, 0 is returned
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	va_list valist;

	va_start(valist, n);
	for (i = 0; i < n; i++)
		sum += va_arg(valist, int);
	va_end(valist);
	return (sum);
}
