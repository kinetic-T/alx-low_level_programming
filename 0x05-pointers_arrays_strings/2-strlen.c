#include <stdio.h>

/**
 * _strlen - func for len of str
 * @s: pointer to str
 *
 * Return: returns len of str
 */

int _strlen(char *s)
{
	int count, i;

	count = 0;
	i = 0;
	while (s[i] != '\0')
	{
		count++;
		i++;
	}
	return (count);
}
