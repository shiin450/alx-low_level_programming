#include "main.h"

/**
 * main - Print "_putchar" followed by a new line.
 * Description: standard libraries are not allowed, so improvise
 * Return: 0
 */

int main(void)
{
	/* define array of chars */

	char tobePrinted[] = "_putchar";
	int i = 0;

	/* loop through the array */

	while (tobePrinted[i] != '\0')
	{

		_putchar(tobePrinted[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
