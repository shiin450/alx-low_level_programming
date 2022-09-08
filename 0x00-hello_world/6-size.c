#include <stdio.h>
/**
 ** main - prints text using putf funtion
 ** just adhering to betty-style
 ** Return: 0 if successful else 1
  */
int main(void)
{
	printf("Size of a char: %d bytes(s)\n", sizeof(char));
	printf("Size of a int: %d bytes(s)\n", sizeof(int));
	printf("Size of a long int: %d bytes(s)\n", sizeof(long int));
	printf("Size of a float: %d bytes(s)\n", sizeof(float));
	return (0);
}
