#include <stdio.h>

/**
 * main - entry point
 * Description: Print 3 digit combos
 * Return: always 0
 */

int main(void)
{
	int n, first, second, third;

	n = 0;
	while (n < 1000)
	{
		first = n / 100;
		second = (n % 100) / 10;
		third = n % 10;
		if (first < second && second < third)
		{
			putchar ('0' + first);
			putchar ('0' + second);
			putchar ('0' + third);
			if (first < 7)
			{
				putchar (',');
				putchar (' ');
			}
		}
		n++;
	}
	putchar ('\n');
	return (0);
}
