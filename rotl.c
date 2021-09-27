#include "monty.h"

/**
 * 
*/

void rotl(stack_t **stack, unsigned int line_number)
{
	(void)line_number;
	stack_t *left;
	stack_t *right = *stack;

	while (right->next)
	{
		left = right->next;
	}
	left->next = NULL;
	right->prev = NULL;
	(*stack) = right; 

}