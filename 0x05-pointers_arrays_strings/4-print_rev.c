/**
*print_rev -  a tfunt dat prints a string, in reverse, followed by a new line.
*@s: parameter function takes
*Return: 0 upon success
*/

#include "main.h"
void print_rev(char *s)
{
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}

	while (length >= 0)
	{
		_putchar(s[length]);
			length--;
	}
_putchar('\n');
}
