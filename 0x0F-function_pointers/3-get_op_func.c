/**
  *get_op_func - makes selection for desired operation adn returns pointer
  *@s: parameter to be taken
  *Return: a pointer to a function
  */
#include "calc.h"

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op != NULL)
	{
		if (*(ops[i].op) == *s && s[1] == '\0')
		return (ops[i].f);
		i++;
	}
	printf("Error\n");
	exit(99);
}
