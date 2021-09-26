#include "monty.h"

/**
 * _pstr - prints the string starting at the top of the stack
 * @stack: pointer to pointer to the top of stack
 * @line_number: line_number of instructions
 */

void pstr(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp;

	(void)line_number;
	if (!stack || !*stack)
	{
		printf("\n");
		return;
	}

	tmp = *stack;
	while (tmp)
	{
		if (tmp->n == 0)
			break;
		if ((tmp->n > 64 && tmp->n < 91) || (tmp->n > 96 && tmp->n < 123))
		{
			_putchar(tmp->n);
		}
		else
			break;
		tmp = tmp->next;
	}
	printf("\n");
}
