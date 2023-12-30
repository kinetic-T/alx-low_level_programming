#include <stdio.h>

/**
 * main - entry point
 * Description: print 4 digit combos
 * Return: always 0
 */

int main(void)
{
	int n, first, second, third, fourth;

	n = 0;
	while (n < 10000)
	{
		first = (n / 100) / 10;
		second = (n / 100) % 10;
		third = (n % 100) / 10;
		fourth = n % 10;
		if (first <= third && second < fourth && second <= third)
		{
			putchar ('0' + first);
			putchar ('0' + second);
			putchar (' ');
			putchar ('0' + third);
			putchar ('0' + fourth);
			if (n < 9899)
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
