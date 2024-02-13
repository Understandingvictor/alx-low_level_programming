#include "main.h"
/**
  *_putchar - prints a character to the stdout
  *@c: character to be printed
  *Return: the number of character printed
  */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
