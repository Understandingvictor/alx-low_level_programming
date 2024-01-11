/**
  *factorial - returns factorial of a number
  *@n: parameter to be taken
  *Return: factorial
  */

#include "main.h"
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
