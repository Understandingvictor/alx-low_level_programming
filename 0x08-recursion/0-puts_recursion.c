/**
   *_puts_recursion - pprints a string followed by A new line
   *@s: as a parameter
   *Return: nothing
   */

#include "main.h"
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar ('\n');
		return;
	}
	_putchar (*s);
	_puts_recursion(s + 1);
}
