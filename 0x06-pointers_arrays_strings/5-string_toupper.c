#include <stdio.h>

/**
 * string_toupper - changes lowercase to uppercase
 * @c: char to be changed
 *
 * Return: returns uppercase char
 */

char *string_toupper(char *c)
{
	int i, l;

	i = 0;
	while (c[i] != '\0')
	{
		l = 0;
		while (l < 26)
		{
			if (('a' + l) == c[i])
				c[i] = ('A' + l);
			l++;
		}
		i++;
	}
	return (c);
}
