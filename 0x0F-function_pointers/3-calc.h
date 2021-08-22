#ifndef CALC
#define CALC

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * op_add - adds two numbers 
 * @a:num1
 * @b:num2
 * Return: a + b
 */

int op_add(int a, int b);

/**
 * op_sub - substracts two numbers
 * @a:num1 
 * @b: num2
 * Return: a - b
 */

int op_sub(int a, int b);

/**
 * op_mul - multiplies two numbers
 * @a:num1
 * @b:num2
 * Return: a * b
 */
int op_mul(int a, int b);

/**
 * op_div - divides two numbers
 * @a:num1
 * @b:num2
 * Return: a / b or error if b = 0
 */

int op_div(int a, int b);

/**
 * op_mod - module a to b
 * @a:num 1
 * @b:num 2
 * Return: a % b
 */
int op_mod(int a, int b);


int (*get_op_func(char *s))(int, int);

/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: the function associated
 */

typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

#endif /*CALC*/



#IE#endif /*CALC*/
