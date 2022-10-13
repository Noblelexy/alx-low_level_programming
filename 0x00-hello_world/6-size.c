#include <stdio.h>
/**
 * main - Entry
 * Return: Always 0
 */
int main(void)
{
	printf("Size of a char: %lu byte(s)\n", (unsigned char)sizeof(char));
	printf("Size of a int: %lu byte(s)\n", (unsigned int)sizeof(int));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long int)sizeof(long int));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long long int)sizeof(long long int));
	printf("Size of a float: %lu bytes(s)\n", (unsigned float)sizeof(float));
	return (0);
}
