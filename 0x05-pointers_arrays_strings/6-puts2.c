#include "main.h"

/**
 * puts2 - prints every other char
 * @str: string
 *
 * Return: nothing
 */

void puts2(char *str)
{
	int i;

	i = 0;
	do {
		if (str[i] == '\0')
			break;
		_putchar(str[i]);
		i += 2;
		if (str[i + 1] == '\0')
		{
			_putchar(str[i]);
			break;
		}
	} while (str[i] != '\0');
	_putchar('\n');
}
