/**
*main - this program prints alphabets while exempting q and e
*Return: This returns 0 upon success
*/

#include <stdio.h>

int main(void)
{
	char alphabet = 'a';
	char lastAlphabet = 'z';

	while (alphabet <= lastAlphabet)
	{
		if (alphabet != 'e' && alphabet != 'q')
		{putchar(alphabet);
		}
	alphabet++;
	}

	putchar('\n');

	return (0);
}
