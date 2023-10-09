#include <stdlib.h>
#include <time.h>
/**
*main - a programme that assigns random number to a variable
*description - this is a programme that outputs to the stdin
*Return: Returns 0 upon completion
*/


int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}

	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}

	else
	{
		printf("%d is negative\n");
	}

	return (0);
}
