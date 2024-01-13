/**
   *print_diagonal - draws diagonal line
   *@n: parameter to be taken
   *Return: nothing
   */
#include "main.h"
void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		if (n < 0)
		{
			break;
		}
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar ('\\');
		_putchar ('\n');
	}
	_putchar ('\n');
}
