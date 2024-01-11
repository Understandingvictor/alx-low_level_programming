/**
  *_pow_recursion - returns the value of x raised to power y
  *@x: parameter to be taken
  *@y: parameter to be taken
  *Return: int upon success
  */

#include "main.h"
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
