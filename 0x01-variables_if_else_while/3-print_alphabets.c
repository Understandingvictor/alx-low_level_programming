/**
*main - This program prints alphabets in lower and upper cases appending a line
*Return: Returns 0 upon completion
*/

#include <stdio.h>

int main(void)
{

	char alphabet = 'a';
	char ALPHABET = 'A';

	char z = 'z';
	char Z = 'Z';

	while (alphabet <= z)
	{
		putchar(alphabet);
		alphabet++;
	}

	while (ALPHABET <= Z)
	{
		putchar(ALPHABET);
		ALPHABET++;

	}

	putchar('\n');
		return (0);

}
