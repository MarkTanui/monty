#include "monty.h"

/**
 * pint - Prints the character at top of the stack
 * @stack: Double pointer to the top of stack
 * @line_number: Number's line
 * Return: Nothing
 */

void pchar(stack_t **stack, unsigned int line_number)
{

	(void)line_number;

	if (*stack == NULL || stack == NULL)
	{
		fprintf(stderr, "L%u: can't pchar, stack empty", line_number);
		f_list(vari.mystack);
		fclose(vari.fil);
		exit(EXIT_FAILURE);
	}
	if (((*stack)->n > 64 && (*stack)->n < 91) ||
		 ((*stack)->n > 96 && (*stack)->n < 123))
	{
		putchar((*stack)->n);
		putchar('\n');
	}
	else
	{
		fprintf(stderr, "L%u: can't pchar, value out of range", line_number);
		f_list(vari.mystack);
		fclose(vari.fil);
		exit(EXIT_FAILURE);
	}
}
