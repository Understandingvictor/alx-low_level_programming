/**
*puts2 -  a function that prints every other character of a string,
*starting from first character and printing a new line
*@str: param to be taken by function
*Return: 0 upon completion
*/

#include "main.h"

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; ++i)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
	_putchar('\n');
}
