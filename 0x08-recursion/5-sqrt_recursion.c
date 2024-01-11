#include "main.h"

/**
  *_sqrt_recursion - main function
  *@n: as parameter
  *Return: natural sqrt
  */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (1);
	}
	else
	{
		return (find_sqrt(n, 0));
	}
}

/**
  *find_sqrt - recursor
  *@n: as parameter
  *@guess: as parameter
  *Return: int
  */

int find_sqrt(int n, int guess)
{
	if (guess * guess == n)
	{
		return (guess);
	}
	else if (guess * guess > n)
	{
		return (-1);
	}
	else
	{
		return (find_sqrt(n, guess + 1));
	}
}
