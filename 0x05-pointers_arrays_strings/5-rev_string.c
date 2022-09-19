#include "main.h"

/**
 * rev_string - this function prints strings in reverse
 * @s: a useless pointer
 *
 * Return: nothing.
 */

void rev_string(char *s)
{


	int i;
	int len;
	int j = 0;
	char b;
	char e;

	for (len = 0; s[len] != '\0'; len++)
	{
	}

	i = len - 1;

	while (i > j)
	{
		b = s[j];
		e = s[i];

		s[j] = e;
		s[i] = b;
		i--;
		j++;
	}
}
