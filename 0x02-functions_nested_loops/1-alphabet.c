/**
*print_alphabet - Prints the lowercase alphabet followed by a newline
*Return: 0 upon success
*/

#include "main.h"

void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}

	_putchar('\n');
}
