#include "monty.h"

/**
 * subtract_top_element - subtract top element of stack and push
 * @stk: pointer to the head
 * @line_num: line number
 *
 * Return: No return
 */
void subtract_top_element(stack_t **stk, unsigned int line_num)
{
	int value;

	if (b.stack_length < 2)
	{
		fprintf(stderr,
				"L%u: can't sub, stack too short\n",
				line_num);
		exit(EXIT_FAILURE);
	}

	value = (*stk)->n;
	pop_top_element(stk, line_num);
		(*stk)->n -= value;
}
