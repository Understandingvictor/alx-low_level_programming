/**
*main - prints _putchar
*Return: 0 upon completion
*/

#include "main.h"
#include <unistd.h>
int _putchar(char c)
{
    return(write(1, &c, 1));
}

