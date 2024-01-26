/**
 *print_numbers - prints numbers followed by a new line
 *@separator: string to be printed between numbers
 *@n: number of integers passed
 *Return: 0 upon success
 */
 
#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arguments;

	if (separator == NULL)
		exit(1);

	va_start(arguments, n);

	for (i = 0; i < n; i++)
	{
		if (i == 0)
			printf("%d", va_arg(arguments, int));
		else
			printf("%s%d", separator, va_arg(arguments, int));

		
		if (i == n - 1)
			break;
	}
	va_end(arguments);
	printf("\n");
}
