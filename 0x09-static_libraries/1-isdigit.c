#include "holberton.h"

/**
 *_isdigit - checks if c is between 0 and 9
 *@c: is the integer to be checked
 *Return: 1 if c is digit
 *else return 0
 */
int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
		return (1);
	else
		return (0);
}
