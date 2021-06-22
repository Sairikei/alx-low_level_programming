#include "holberton.h"

/*
 *main - print alphabet 10 times
 *
 * Return  Always 0
 */
void print_alphabet(void)
{

	int a;
	char c;

	for (a = 0; a < 10; a++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
