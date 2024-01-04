#include "main.h"
#include <stdio.h>

/**
 * puts_half - prints from center
 * @str: string
 *
 * Return: nothing
 */

void puts_half(char *str)
{
	int n, i, len;

	i = 0;
	len = 0;
	while (str[i] != '\0')
	{
		len++;
		i++;
	}
	/*
	 * printf("%d - %c\n", len, str[222]);
	 * putchar(str[222])
	 * putchar('\n');
	 * len--;
	 */

	if (len % 2 == 0)
		n = len / 2;
	else
		n = ((len - 1) / 2 + 1);
	do {
		if (str[n] == '\0')
			break;
		_putchar(str[n]);
		n++;
		if (str[n + 1] == '\0')
		{
			_putchar(str[n]);
			break;
		}
	} while (str[n] != '\0');
	_putchar('\n');
}
