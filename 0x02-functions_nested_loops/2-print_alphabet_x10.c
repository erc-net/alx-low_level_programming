#include "main.h"
/**
 * print_alphabet_x10 - a function that prints the alphabet 10 times
 *
 * Return: x10 a-z
 */
void print_alphabet_x10(void)
{
	int n, co;

	co = 10;

	while (co < 10)
	{
		for (n = 'a'; n <= 'z'; n++)
		{
			_putchar(n);
		}
		co++;
		_putchar('\n')
	}
}
