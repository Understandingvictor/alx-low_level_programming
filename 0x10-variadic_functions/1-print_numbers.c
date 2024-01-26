/**
 *print_numbers - prints numbers followed by a new line
 *@separator: string to be printed between numbers
 *@n: number of integers passed
 *Return: 0 upon success
 */

#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list arguments;

	if (separator == NULL)
		return;

	va_start(arguments, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(arguments, int));

		if (i != n - 1 && separator != NULL)
		{
			printf("%s ", separator);
		}
	}
	va_end(arguments);
	_putchar('\n');
}
