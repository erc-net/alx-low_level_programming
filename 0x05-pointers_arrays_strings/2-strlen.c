#include "main.h"
#include <stdio.h>
/**
 * _strlen - a function that returns the length of a string
 * @s: char input
 * Return: length of the input string
 */
int _strlen(char *s)
{
	int t = 1, sum = 0;
	char l = s[0];

	while (l != '\0')
	{
		sum++;
		l = s[t++];
	}
	return (sum);
}
