#ifndef MONTY_H
#define MONTY_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <limits.h>
#include <sys/stat.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 */
typedef struct stack_s
{
int n;
struct stack_s *prev;
struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 */
typedef struct instruction_s
{
char *opcode;
void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

/**
 * struct global - opcode and its function
 * @fil: the opcode
 * @line_number: function to handle the opcode
 * @num: number
 * @queue_ask: a
 * @mystack: stack
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO project
 */

typedef struct global
{
FILE *fil;
unsigned int line_number;
char *num;
int queue_ask;
stack_t *mystack;
} var_1;

extern var_1 vari;

void pall(stack_t **stack, unsigned int line_number);
void push(stack_t **stack, unsigned int line_number);
void pint(stack_t **stack, unsigned int line_number);
void run(char (*refer)[80]);
void f_list(stack_t *mystack);
void nop(stack_t **stack, unsigned int line_number);
void pop(stack_t **stack, unsigned int line_number);
void swap(stack_t **stack, unsigned int line_number);
int _atoi(char *str);
void add(stack_t **stack, unsigned int line_number);
void sub(stack_t **stack, unsigned int line_number);
void multi(stack_t **stack, unsigned int line_number);
void division(stack_t **stack, unsigned int line_number);
void module(stack_t **stack, unsigned int line_number);
void pchar(stack_t **stack, unsigned int line_number);
void pstr(stack_t **stack, unsigned int line_number);
int putchar(char c);

#endif