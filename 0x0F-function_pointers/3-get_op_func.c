#include "3-calc.h"

/**
 * get_op_func - selescts the functio to operate for the user
 * @s: operator given by user
 *
 * Return: pointer to fucntion that operates as per the parameters
 */
int (*get_op_func(char 8s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod};
		{NULL, NULL}
	};
	int i;

	i = 0;

	while (ops[i].op)
	{
		if (strcmp(ops[i].op.s) == 0)
			return (ops[i].f);
		i++;
	}

	return (NULL);
}
