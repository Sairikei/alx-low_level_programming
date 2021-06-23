#include "holberton.h"

/**
 *main -print the first 50 numbers
 *Return: 0
 */
int main(void)
{
	int count = 2;
	long int i = 1, j = 2;
	long int k;

	while (count <= 50)
	{
		if (count == 50)
		{
			printf("%lu\n", j);
		}
		else
		{
			printf("%lu, ", j);
		}

		k = j;
		j += i;
		i = k;
		count++;
	}

	return (0);
}
