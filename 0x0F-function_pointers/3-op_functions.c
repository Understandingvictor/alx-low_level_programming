#include "calc.h"
/**
  *op_add - adds
  *@a: parameter
  *@b: parameter
  *Return: int
  */
int op_add(int a, int b)
{
	return (a + b);
}

/**
*op_sub - subtracts
*@a: parameter
*@b: parameter
*Return: int
*/
int op_sub(int a, int b)
{
	return (a - b);
}


/**
  *op_mul - multiplies
  *@a: parameter
  *@b: parameter
  *Return: int
  */
int op_mul(int a, int b)
{
	return (a * b);
}


/**
  *op_div - divides
  *@a: parameter
  *@b: parameter
  *Return: int
  */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error");
		exit(100);
	}
	else
	{
		return (a / b);
	}
}


/**
  *op_mod - modifies
  *@a: parameter
  *@b: parameter
  *Return: int
  */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error");
		exit(100);
	}
	else
	{
		return (a % b);
	}
}
