/*
*main - prints alphabets in lowercase followed by a new line
*Return: 0 upon success
*/

#include "main.h"

void print_alphabet(void)
{
	char start = 'a';
	char stop = 'z';

	while (start <= stop)
	{
		_putchar(start);
		start++;
	}
}

int main(void)
{
	print_alphabet();
	_putchar('\n');
	return (0);
}
