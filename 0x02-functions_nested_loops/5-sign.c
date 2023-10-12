/**
*print_sign - function that prints sign of a nuber
*@n: parameter to be taken
*Return: 0 upon program run compleion
*/

#include "main.h"

int print_sign(int n)
{
	char plus = '+';
	char zero = '0';
	char minusOne = '-';

	if (n > 0)
	{
		_putchar(plus);
			return (1);
	}

	else if (n == 0)
	{
		_putchar(zero);
			return (0);
	}

	else
	{
		_putchar(minusOne);
		_putchar('1');
			return (-1);
	}
}
