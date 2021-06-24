#include "holberton.h"

/**
 *print_line - print a straight ;ine in the terminal
 *@n: number to be checked
 *Return: straight line
 */
void print_line(int n)
{
	while (n--)
	{
		if (n <= 0)
			break;
		else
			_putchar('_');
	}
	_putchar('\n');
}
