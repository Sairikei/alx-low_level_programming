#include "holberton.h"

/**
 *_puts - print a string followed by a new line
 *
 *@str: line to be printed in stdout
 *Return: string
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
