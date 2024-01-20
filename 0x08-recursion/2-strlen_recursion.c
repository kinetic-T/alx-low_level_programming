#include "main.h"

/**
 * _strlen_recursion - count str len
 * @s: string to be counted
 *
 * Return: Return len of str
 */

int _strlen_recursion(char *s)
{
	/* Base case:If current char is null return 0 */
	if (*s == '\0')
		return (0);
	/* increment length by 1 and recursively call function */
	return (1 + _strlen_recursion(s + 1));
}
