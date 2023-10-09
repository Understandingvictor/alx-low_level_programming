/**
*main - this prints alphabets in lowercase using while loop
*Return: this returns 0 upon success
*/

#include <stdio.h>

int main(void)
{

	char alphabet = 'a';
	char lastAlphabet = 'z';

	while (alphabet <= lastAlphabet)
	{
	putchar(alphabet);
	alphabet++;
	}

	putchar('\n');

	return (0);
}
