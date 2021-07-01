#include "holberton.h"

/**
 *strcat - concentrate two strings
 *@dest: char parameter
 *@src: char parameter
 *Return: dest char value
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = j = 0;
	while (*dest != '\0')
		i++;
	while ((*(dest + 1) = *(src + j)))
	{
		i++;
		j++;
	}
	return (dest);
}
