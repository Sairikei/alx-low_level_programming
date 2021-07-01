#include "holberton.h"

/**
 *_strncat - appends src to the dest string
 *@dest: string to append by src
 *@src: string to append to dest
 *@n: integer
 *Return: address of dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
