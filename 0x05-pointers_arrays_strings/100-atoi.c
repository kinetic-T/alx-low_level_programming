#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * _atoi - converts str to int
 * @s: string to be converted
 *
 * Return: Returns int
 */

int _atoi(char *s)
{
	int n, sign, result;

	n = 0;
	result = 0;
	sign = 1;
	while (s[n] != '\0')
	{
		if (s[n] == '+')
			sign *= 1;
		else if (s[n] == '-')
			sign *= -1;

		if (s[n] >= '0' && s[n] <= '9')
		{
			result = result * 10 + (s[n] - '0');
			if (s[n + 1] == ' ')
			{
				break;
			}
		}
		n++;
	}
	return (sign * result);
}
