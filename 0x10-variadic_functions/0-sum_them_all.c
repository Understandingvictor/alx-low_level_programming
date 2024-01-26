/**
  *sum_them_all - returns the sum of all its parameters
  *@n: number of arguments
  *Return: sum of its parameters
  */

#include "variadic_functions.h"
#include <stdarg.h>
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list argument;
	
	if (n == 0)
		return (0);

	va_start(argument, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(argument, int);
	}
	va_end(argument);
	return (sum);

}
