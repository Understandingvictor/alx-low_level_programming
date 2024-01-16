/**
  *main - prints all arguments it receives
  *@argc: argument count
  *@argv: argument vector || arrays of strings upto the number of argc
  *Return: 0 upon completion
  */
#include <stdio.h>
int main(int argc, char *argv[])
{
	int i;
	(void)argc;

	for (i = 0; argv[i]; i++)
		printf("%s\n", argv[i]);
	return (0);
}
