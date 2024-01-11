/**
  *is_prime_number - returns1 if the inout integer is a prime no. other wise 0
  *@n: parameter
  *Return: integer
  */

#include "main.h"
int is_prime_number(int n)
{
	return (is_prime_helper(n, 2));
}

/**
  *is_prime_helper - helper function
  *@n: parameter
  *@divisor: parameter
  *Return: 0 upon success
  */

int is_prime_helper(int n, int divisor)
{
	if (n < 2)
	{
		return (0);
	}
	else if (divisor * divisor > n)
	{
		return (1);
	}
	else if (n % divisor == 0)
	{
		return (0);
	}
	else
	{
		return (is_prime_helper(n, divisor + 1));
	}
}
