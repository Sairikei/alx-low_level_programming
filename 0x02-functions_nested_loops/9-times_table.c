#include "holberton"

/*
 * print_times - print the times 9 table
 */
void times_table(void)
{
	int i, j, pro;
	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			pro = i*j;
			if (j == 0)
			{
				_putchar(48);
				continue;
			}

			_putchar(',');
			_putchar(' ');
			if (pro >= 10)
			{
				_putchar(pro / 10 + 48);
				_putchar(pro % 10 + 48);
			}

			else

			{
				_putchar(' ');
				_putchar(pro + 48);
			}
		}

		_putchar('\n');

	}
}
