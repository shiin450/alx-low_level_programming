/**
 * _strlen - this function returns size of a  pointer
 * @s: a useless pointer
 *
 * Return: int sizeof pointer.
 */

int _strlen(char *s)
{
	char *c = s;

	while (*c != '\0')
	{
		c++;
	}
	return (c - s);
}
