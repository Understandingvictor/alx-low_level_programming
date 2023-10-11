/**
*print_alphabet_10 - prints the alphabet 10x
*Return: 0 upon success
*/
#include "main.h"

void print_alphabet_x10(void)
{
	int i = 0;
	char start = 'a';

	while (i <= 10)
	{
		while (start <= 'z')
		{
			_putchar(start);
			start++;
		}

		_putchar('\n');
		i++;
	}
}
