#include <stdio.h>
#include "holberton.h"
/**
 *main - print the first 98 numbers
 *
 *Return: none
 */
int main(void)
{
	int i = 98;
	long t1 = 0, t2 = 1;
	unsigned long int nextTerm = t1 + t2;
	
	while (i > 0)
	{
	printf("%lu", nextTerm);
	if (i != 1)
	{
		printf(", ");
	}

	t1 = t2;
	t2 = nextTerm;
	nextTerm = t1 + t2;
	i--;

	}
	printf("\n");
	
	return (0);
}
