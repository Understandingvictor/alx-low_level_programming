/**
  *print_triangle - prints triange
  *@size: parameter to be taken
  *Return: void
  */
#include "main.h"
void print_triangle(int size)
{
	int i, j, k;

	if (size <= 0)
	{
		_putchar ('\n');
		return;
	}

	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size - i; j++)
		{
			_putchar (' ');
		}
		for (k = 1;  k <= i; k++)
		{
			_putchar('#');
		}
		_putchar ('\n');
	}
	if (size == 1)
	{
		_putchar ('#');
		_putchar ('\n');
	}
}
