#include "holberton.h"

/**
 *print_line - print a straight line in the terminal
 *@n: number to be checked
 *Return: straight line
 */
void print_line(int n)
{
	int c;

	c = 0;
	while (c < n)
	{
		_putchar('_');

		c++;
	}
	_putchar('\n');
}
