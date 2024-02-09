#include "main.h"

/**
  *get_bit - Returns the value of a bit at a given index
  *@n: The number containing the bits
  *@index: index of bit to retrieve
  *Return: the value of bit at index index or -1 if there be error
  */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	return ((n >> index) & 1);
}
