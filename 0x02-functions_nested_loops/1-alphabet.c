/**
 * print_alphabet - Prints alphabets in lowercase followed by a new line.
 * Description: standard libraries not allowed, you can use.
 */
void print_alphabet(void)
{
    char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
    int i = 0;

    while (i != '\0')
    {
        _putchar(alphabet[i]);
		i++;
    }
    _putchar('\n');
}
