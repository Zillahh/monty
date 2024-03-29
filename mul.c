#include "monty.h"

/**
 * multiply_top_two_elements - multiply two top elements of the stack and push
 * @stk: pointer to head
 * @line_num: line number
 *
 * Return: No return
 */
void multiply_top_two_elements(stack_t **stk, unsigned int line_num)
{
	int value;

	if (stack_length < 2)
	{
		fprintf(STOUT_FILENO,
				"L%u: can't mul, stack too short\n",
				line_num);
		exit(EXIT_FAILURE);
	}
	value = (*stk)->n;
	pop_top_element(stk, line_num);
	(*stk)->n *= value;
}
