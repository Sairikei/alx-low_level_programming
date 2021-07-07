#include "holberton.h"

/**
 *_puts_recursion - prints a string
 *@s: to be tested
 *Return: string and a new line
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}
	else
	{
		_putchar('\n');
	}
}
