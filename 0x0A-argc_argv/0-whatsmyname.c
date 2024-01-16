/**
  *main - prints out the program name
  *@argc: argument count
  *@argv: argument vector
  *Return: 0 upon completion
 */

#include <stdio.h>
int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
