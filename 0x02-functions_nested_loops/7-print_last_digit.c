/**
*print_last_digit - prints the last digit of a number
*@num: parameter representing the number
*Return: This returns 0 upon on successful execution
*/

#include "main.h"

int print_last_digit(int num)
{
lastdigit = (num % 10);
_putchar(lastdigit + '0');

return (0);
}
