#include "main.h"

/**
 * _isalpha - function name
 * @c: letter for comparism
 * Description: checks for lowercase
 * Return: returns 1 or 0
 */

int _isalpha(int c)
{
	char l;

	l = 0;
	while (l < 26)
	{
		if (('a' + l) == c || ('A' + l) == c)
			return (1);
		l++;
	}
	return (0);
}
