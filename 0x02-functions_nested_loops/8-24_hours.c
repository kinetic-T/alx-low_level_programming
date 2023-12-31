#include "main.h"

/**
 * jack_bauer - function name
 * Description: prints 24 hrs
 * Return: void
 */

void jack_bauer(void)
{
	int hr, min;

	hr = 0;
	while (hr < 24)
	{
		min = 0;
		while (min < 60)
		{
			_putchar('0' + (hr / 10));
			_putchar('0' + (hr % 10));
			_putchar(':');
			_putchar('0' + (min / 10));
			_putchar('0' + (min % 10));
			_putchar('\n');
			min++;
		}
		hr++;
	}
}

