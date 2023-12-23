/**
   * more_numbers - printing of numbers from 0 to 14
     * Return: 1 upon success
*/
#include "main.h"
void more_numbers(void)
{
	int i;
	int j;

		for (i = 0; i < 10; i++)
		{
			for (j = 0; j < 15; j++)
			{
				if (j >= 10)
					_putchar (j / 10 + '0');
				_putchar (j % 10 + '0');

			}
			_putchar ('\n');
		}
}
