#include "main.h"

/**
 * _puts - this function prints string
 * @str: a useless pointer
 *
 * Return: nothing.
 */

void _puts(char *str)
{

	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
