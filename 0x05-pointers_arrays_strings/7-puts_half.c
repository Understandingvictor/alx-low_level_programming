/**
*puts_half -  a function that prints half of a string, followed by a new line.
*@str: takes it as parameter.
*Return: 0 upon completion
*/
#include "main.h"

#include "main.h"
#include <stdio.h>

void puts_half(char *str)
{
	int l;
	int secondLength;
	int n;

	for (l = 0; str[l] != '\0'; l++)
	{
		;
	}

	secondLength = l / 2;

	if (secondLength % 2 == 1)
	{
		for (n = (secondLength - 1) / 2; str[secondLength + n]; n++)
		{
			_putchar(str[secondLength + n]);
		}
	}
	else
	{
		int start = secondLength;
		while (str[start] != '\0')
		{
			_putchar(str[start]);
			start++;
		}
	}
	_putchar('\n');
}
