#include "monty.h"

/**
 * add_top_two_elements - add the two top elements of the stack
 * @stk: pointer to the head
 * @line_num: line number
 *
 * Return: No return
 */
void add_top_two_elements(stack_t **stk, unsigned int line_num)
{
	int total = 0;

	if (stack_length < 2)
	{
		fprintf(STDOUT_FILENO,
				"L%u: can't add, stack too short\n",
				line_num);
		exit(EXIT_FAILURE);
	}
	total += (*stk)->n;
	pop_top_element(stk, line_num);
	(*stk)->n += total;
}
