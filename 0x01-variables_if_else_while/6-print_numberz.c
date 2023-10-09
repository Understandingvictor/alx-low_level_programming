/**
*main - this program prints single digits of base 10 from 0 using putchar
*Return: This returns 0 on completion
*/

#include <stdio.h>

int main(void)
{

	int num = 0;

	while (num < 10)
	{
		putchar(num + '0');

		num++;

	}
	putchar('\n');

	return (0);
}
