/**
  *main - calculates prime factor
  *Return: 0 upon completion
  */
#include <stdio.h>
int main(void)
{
	long int num = 612852475143;
	int i = 2;

	while (i <= num)
	{
		if (num / i == 0)
			break;
		if (num % i == 0)
		{
			num = num / i;
		}
		if (num % i == 0)
		{
			while (num % i == 0)
			{
				num = num / i;
			}
		}
		i++;
	}
	printf("%d\n", i);
	return (0);
}
