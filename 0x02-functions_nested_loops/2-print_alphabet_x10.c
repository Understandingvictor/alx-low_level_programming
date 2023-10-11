/**
*print_alphabet_x10 - prints the alphabet x10
*Return: 0 upon success
*/
#include "main.h"

void print_alphabet_x10(void)
{
	int i = 0;
	char start = 'a';

	while (i <= 9)
	{
		while (start <= 'z')
		{
			_putchar(start);
			start++;
		}

		if (1 < 9)

		_putchar('\n');
		i++;
		start = 'a';
	}
}
