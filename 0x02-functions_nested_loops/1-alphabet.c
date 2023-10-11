/*
*main - prints alphabets in lowercase followed by a new line
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
