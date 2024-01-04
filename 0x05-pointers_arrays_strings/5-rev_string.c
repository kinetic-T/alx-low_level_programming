#include "main.h"

/**
 * rev_string - func to print string
 * @s: pointer to s
 *
 * Return: nothing
 */

void rev_string(char *s)
{
	int i, len;

	i = 0;
	len = 0;
	while (s[i] != '\0')
	{
		i++;
		len++;
	}
	len--;
	i = 0;
	while (i < len)
	{
		char temp = s[i];

		s[i] = s[len];
		s[len] = temp;

		i++;
		len--;
	}
}
