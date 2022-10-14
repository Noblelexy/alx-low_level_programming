#include <stdio.h>

/**
  * main - Prints the numbers from 01 to 89
  *
  * Return: Always (Success)
  */
int main(void)
{
	int c, i;

	c = i = '1';

	for (c = '1'; c <= '8'; c++)
	{
		for (i = '1'; i <= '8'; i++)
		{
			putchar(c);
			putchar(i);

			if ((c != '8') || (c == '8' && i != '8'))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
