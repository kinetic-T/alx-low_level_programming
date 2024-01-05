#include <stdio.h>
#include <time.h>

/**
 * _strcmp - compares strings
 * @s1: first string
 * @s2: second string
 *
 * Return: return 1 if +ve, -1 if -ve, 0 if equal
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] > s2[i])
			return (15);
		else if (s1[i] < s2[i])
			return (-15);
		i++;
	}
	return (0);
}
