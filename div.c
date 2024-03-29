#include "monty.h"

/**
 * divide_second_by_top - divide the second element by the first in the stack
 * @stk: pointer to the head
 * @line_num: line number
 *
 * Return: No return
 */
void divide_second_by_top(stack_t **stk, unsigned int line_num)
{
	int value;

	if (stack_length < 2)
	{
		fprintf(STDOUT_FILENO,
				"L%u: can't div, stack too short\n",
				line_num);
		exit(EXIT_FAILURE);
	}
	value = (*stk)->n;
	pop_top_element(stk, line_num);
	if (value == 0)
	{
		fprintf(STDOUT_FILENO,
				"L%u: division by zero\n",
				line_num);
		exit(EXIT_FAILURE);
	}
	(*stk)->n /= value;
}
