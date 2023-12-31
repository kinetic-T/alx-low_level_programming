#include "main.h"

/**
 * _islower - function name
 * @c: letter for comparism
 * Description: checks for lowercase
 * Return: returns 1 or 0
 */

int _islower(int c)
{
	char l;

	l = 0;
	while (l < 26)
	{
		if (('a' + l) == c)
			return (1);
		l++;
	}
	return (0);
}
