/**
*puts2 -  a function that prints every other character of a string,
*starting from first character and printing a new line
*@str: param to be taken by function
*Return: 0 upon completion
*/

#include "main.h"
void puts2(char *str)
{
	int position = 0;

	while (str[position] != '\0')
	{
		if (position % 2 == 0)
			_putchar(str);
	}
		_putchar('\n');
}
