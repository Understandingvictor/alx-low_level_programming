/**
*_abs - Compputes the absolute value of an integer
*@num1: parameter to be used
*Return: 0 upon successful execution.
*/

#include "main.h"

int _abs(int num1)
{
	if (num1 < 0)
	{
	return (-num1);
	}
	else
	{
	return (num1);
	}
	return (0);
}
