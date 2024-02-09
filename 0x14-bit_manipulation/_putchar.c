/**
  *_putchar - prints out a character
  *@c: parameter to print
  *Return: i dont know
  */
#include <unistd.h>
#include "main.h"
int _putchar(char c)
{
	return (write(1, &c, 1));
}
