/**
*print_rev -  a tfunt dat prints a string, in reverse, followed by a new line.
*@s: parameter function takes
*Return: 0 upon success
*/

#include "main.h"
void print_rev(char *s)
{
	int length = 0;

	while (s[length])
	{
		length++;
	}

	while (length--)
	{
		_putchar(s[length]);
	}
_putchar('\n');
}
