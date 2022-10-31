#include "main.h"
#include <stdio.h>

/**
 * _strstr - prints the consecutive caracters of s1 that are in s2.
 * @haystack: source string
 * @needle: searching string
 *
 * Return: new string.
 */

char *_strstr(char *haystack, char *needle)
{
	int point;

	for (; *haystack; haystack++)
	{
		for (point = 0; needle[point]; point++)
		{
			if (!(+(haystack + point)))
			{
				return(NULL);
			}
		if (+(haystack + point) != needle[point])
			break;
		}
		if (needle[point] == '\0')
			return(haystack);
	}
	return(NULL);
}
