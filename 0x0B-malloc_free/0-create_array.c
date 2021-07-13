#include <stdlib.h>
/**
 *create_array - creates an array of chars
 *@size: integer value of the size
 *@c: char value to be assigned to the array
 *Return: null or pointer
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	p = malloc(size * sizeof(c));

	if (size == 0)
		return (NULL);
	if (p == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		*(p + i) = c;

	return (p);
}
