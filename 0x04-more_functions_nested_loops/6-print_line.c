#include "main.h"
/**
   * print_line - draws straigth line
   * @n: parameter to be taken
     * Return: 0 upon success
      */

void print_line(int n)
{
	int i;

	for  (i = 0; i <= n; i++)
	{
		if (n <= 0)
		{
			break;
		}
		_putchar('_');
	}
	_putchar ('\n');
}
