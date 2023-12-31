#include "main.h"

/**
 * times_table - function name
 * Description: prints 9 times table
 * Return: void
 */

void times_table(void)
{
	int row, col, prod;

	row = 0;
	while (row < 10)
	{
		col = 0;
		while (col < 10)
		{
			prod = row * col;
			if (col > 0 && prod < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			else if (col < 10 && prod > 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (prod < 10)
				_putchar('0' + prod);
			else
			{
				_putchar('0' + (prod / 10));
				_putchar('0' + (prod % 10));
			}
			col++;
		}
		_putchar('\n');
		row++;
	}
}

