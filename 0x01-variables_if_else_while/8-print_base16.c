#include <stdio.h>
/**
*main - This program prints all numbers of base 16 using putchar function
*Return: 0 on success
*/



int main(void)
{
	char hexDigit = '0';

	while (hexDigit <= '9')
	{
		putchar(hexDigit);
		hexDigit++;
	}

	hexDigit = 'a';

	while (hexDigit <= 'f')
	{
		putchar(hexDigit);
		hexDigit++;
	}

	putchar('\n');
	return (0);
}
