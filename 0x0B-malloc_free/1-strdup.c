#include <stdlib.h>
/**
 *_strdup - returns a pointer to a newly allocated space in memory
 *@str: char typed string pointer
 *Return: null or pointer
 */
char *_strdup(char *str)
{
	char *ar;
	unsigned int size = 0, i = 0;

	if (str == NULL)
		return (NULL);
	{
		while (str[size] != '\0')
			size++;
		size++;
		ar = malloc(size * sizeof(*str));
		if (ar == NULL)
			return (NULL);
		{
			while (i < size)
			{
				ar[i] = str[i];
				i++;
			}
			return (ar);
		}
	}
}
