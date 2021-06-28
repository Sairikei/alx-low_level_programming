#include "holberton.h"

/**
 *print_rev - print a string in reverse
 *
 *@s: string to be printed
 *Return: string
 */
void print_rev(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
