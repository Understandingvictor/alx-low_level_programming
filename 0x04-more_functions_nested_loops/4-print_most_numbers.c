/**
   * print_most_numbers - prints numbers from 0 to 9 using putchar
     * Return: 0 upon success
      */
#include "main.h"
void print_most_numbers(void)
{
	char i = '0';

	while (i >= '0' && i <= '9')
	{
		if (i != '2' && i != '4')
		{
			_putchar (i);
		}
		i++;
	}
	_putchar ('\n');
}
