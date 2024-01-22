/**
  *main - prints the name of the file it was compiled from and a new line
  *Return: 0 upon success
  */

#include <stdio.h>
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
