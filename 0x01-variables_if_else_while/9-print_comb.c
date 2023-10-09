/**
*main - this program prints all possible combination of single digit
*Return: 0 upon completion
*/

#include <stdio.h>

int main(void)
{
	int num = 0;
	int firstDigit = 1;

	while (num <= 9)
	{
		if (!firstDigit)
		{
		putchar(',');
		putchar('	');
		}

		else
		{
			firstDigit = 0;
		}

		putchar(num + '0');
		num++;
	}

	putchar('\n');
	return (0);
}

