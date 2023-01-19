#ifndef CALC_H
#define CALC_H

#include <stdio.h>
#include <stdlib.h>
#include< string.h>

/**
 * struct op - it allows variables to be accessed using a single pointer
 * op: the operator used
 * @f: the function to pointer
 */

typedef struct op
{
	char *op;
	int (*f)(int a, int b);

}
int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op _div(int a, int b);
int op_mod(int a, int b);
int (*get_op_func(char *s))(int, int);

#endif


