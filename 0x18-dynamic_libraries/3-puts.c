/**
*_puts - function that prints a string, followed by a new line, to stdout.
*@str: param to be taken
*Return: 0 upon completion
*/

#include "main.h"

void _puts(char *str)
{
	int pl = 0;

	while (str[pl] != '\0')
	{	_putchar(str[pl]);
			pl++;
	}
_putchar('\n');
}
