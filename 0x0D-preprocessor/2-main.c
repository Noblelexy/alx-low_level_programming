#include <stdio>

/**
 * main - prints the name of the file it was compiled from
 *
 * Return: Everything worked ok
 */

int main(void)
{

	printf("%s\n", __BASE_FILE__);
	return (0);
}
