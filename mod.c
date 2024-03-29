#include "monty.h"

/**
 * compute_remainder - compute the modulus of the second element divided by the top element
 * @stk: pointer to head
 * @line_num: line number
 *
 * Return: No return
 */
void compute_remainder(stack_t **stk, unsigned int line_num)
{
	int value;

	if (stack_length < 2)
	{
		fprintf(STDOUT_FILENO,
				"L%u: can't mod, stack too short\n",
				line_num);
		exit(EXIT_FAILURE);
	}
	value = (*stk) ->n;
	pop_top_element(stk, line_num);
	if (value == 0)
	{
		fprintf(STDOUT_FILENO,
				"L%u: division by zero\n",
				line_num);
		exit(EXIT_FAILURE);
	}
	(*stk)->n %= value;
}
