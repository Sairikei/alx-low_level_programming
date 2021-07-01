#include "holberton.h"

/**
 *_strcat - concentrate two strings
 *@dest: char parameter
 *@src: char parameter
 *Return: dest char value
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
		j++;

	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
