#include "main.h"

/**
 * print_rev - this function prints strings in reverse
 * @s: a useless pointer
 *
 * Return: nothing.
 */

void print_rev(char *s)
{

	int i;
	int x;

	for (x = 0; s[x] != '\0'; x++)
	{
	}

	for (i = x - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
