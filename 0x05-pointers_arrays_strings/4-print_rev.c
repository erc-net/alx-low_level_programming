#include "main.h"

/**
 * print_rev - a function that prints a string, in reverse
 * fcounter is to first count to end, n is to count back
 * @s: str input
 * Return: string in reverse
 */
void print_rev(char *s)
{
	int fcounter = 0;
	int d, c;

	for (d = 0; s[d] != '\0'; d++)
	{
		fcounter++;
	}

	for (c = (fcounter - 1); c >= 0; c--)
	{
		_putchar(s[c]);
	}
	_putchar('\n');
}
