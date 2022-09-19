/**
 * swap_int - this function swaps values of two pointers
 * @a: a useless pointer
 * @b: a useless pointer
 *
 * Return: nothing.
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
