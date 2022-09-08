#include <unistd.h>
/**
 ** main - prints text to stderr using fprintf
 ** just adhering to betty-style
 ** Return: 1 if successful else 0
  */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",
									59);
	return (1);
}
