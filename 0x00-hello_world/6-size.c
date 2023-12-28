#include <stdio.h>

/**
 * main - Entry point
 * Description: prints size of various types
 * Return: always returns 0
 */

int main(void)
{

printf("Size of a char: %zu byte(s)\n", sizeof(char));
printf("Size of a int: %zu byte(s)\n", sizeof(int));
printf("Size of a long int: %zu byte(s)\n", sizeof(long int));
printf("Size of a long long int: %zu byte(s)\n", sizeof(long long intr));
printf("Size of a float: %zu byte(s)\n", sizeof(float));

return (0);
}
