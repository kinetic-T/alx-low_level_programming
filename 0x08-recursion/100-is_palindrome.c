#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * palindrome_helper - palindrome helper function
 * @s: string to check
 * @start: left side
 * @end: right side
 *
 * Return: returns 1 if palindrome and 0 otherwise
 */

int palindrome_helper(char *s, int start, int end)
{
	/* base condition */
	if (s[start] == '\0')
		return (1);
	if (s[start] == s[end])
		return (palindrome_helper(s, start + 1, end - 1));
	else
		return (0);
}

/**
 * is_palindrome - checks for palindrome
 * @s: string to check
 *
 * Return: 1 if palindrome and 0 otherwise
 */

int is_palindrome(char *s)
{
	int length;

	length = strlen(s);
	return (palindrome_helper(s, 0, length - 1));
}
