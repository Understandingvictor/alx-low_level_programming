/**
*times_table - a function that prints the 9 times table, starting with 0
*Return: 0 upon successful execution
*/

#include "main.h"

void times_table(void)
{
	int i, j, result;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			result = i * j;

			if (result < 10)
			{
				_putchar(result + '0');
				_putchar(',');
			}
			else
			{
				_putchar(' ');
				_putchar(result / 10 + '0');
				_putchar(result % 10 + '0');
			}


			}
		_putchar('\n');
	}
}
