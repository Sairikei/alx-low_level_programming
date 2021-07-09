#include <stdio.h>
#include "holberton.h"

/**
 *_strlen - print the length of a string
 *
 *@s: length to be returned
 *Return: count
 */
int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}
