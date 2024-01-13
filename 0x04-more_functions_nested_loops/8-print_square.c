/**
  *print_square - prints a sqaure followed by a new line
  *@size: parameter
  *Return: void
  */
#include "main.h"
void print_square(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		if (size < 0)
		{
			_putchar ('\n');
			return;
		}
		for (j = 0; j < size; j++)
		{
			_putchar ('#');
		}
		_putchar('\n');
	}
}
