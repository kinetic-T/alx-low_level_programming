#include "main.h"

/**
 * print_rev - func to print string
 * @str: pointer to str
 *
 * Return: nothing
 */

void print_rev(char *str)
{
	int i, len;

	i = 0;
	len = 0;
	while (str[i] != '\0')
	{
		i++;
		len++;
	}
	while (str[len] >= 0)
	{
		_putchar(str[len]);
		len--;
		if (len < 0)
			break;
	}
	_putchar('\n');
}
