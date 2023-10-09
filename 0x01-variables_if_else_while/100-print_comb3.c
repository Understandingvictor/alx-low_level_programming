/**
*main - This program prints all possible different combo of two digits
*Return: 0 upon completion
*/

#include <stdio.h>

int main(void)
{
	int num1 = 0;

	while (num1 <= 8)
	{
		int num2 = num1 + 1;

		while (num2 <= 9)
		{
			putchar(num1 + '0');
			putchar(num2 + '0');

			if (num1 < 8 || num2 < 9)
			{
				putchar(',');
				putchar('\t');
			}

			num2++;
		}

		num1++;
	}

	putchar('\n');
	return (0);
}

