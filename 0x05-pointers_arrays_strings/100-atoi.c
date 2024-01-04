#include "main.h"
#include <stdio.h>
#include <limits.h>

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
			/*Check for overflow before performing the addition*/
			if (result > (INT_MAX - (s[n] - '0')) / 10)
			{
				/*Handle overflow appropriately (e.g., set result to INT_MIN or INT_MAX)*/
				return (sign == 1 ? INT_MAX : INT_MIN);
			}
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
