#include "holberton.h"
/**
 *print_alphabet_x10 - Print alphabet in lowercase 10 times
 *
 *Return: 0
 */
void print_alphabet(void)
{

	int count;
	int alphabet;

	for (count  = 0; count < 10; count++)
	{

		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		{
			_putchar(alphabet);
		}
		_putchar('\n');
	}
}
