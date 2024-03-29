#include "monty.h"

/**
 * swap_top_two_elements - swap the top two elements of 'stk'
 * @stk: pointer to the head
 * @line_num: line number
 *
 * Return: No return
 */
void swap_top_two_elements(stack_t **stk, unsigned int line_num)
{
	stack_t *next;

	if (b.stack_length < 2)
	{
		fprintf(stderr,
				"L%u: can't swap, stack too short\n",
				line_num);
		exit(EXIT_FAILURE);
	}
	if (b.stack_length == 2)
	{
		*stk = (*stk)->next;
		return;
	}
	next = (*stk)->next;
	next->prev = (*stk)->prev;
	(*stk)->prev->next = next;
	(*stk)->prev = next;
	(*stk)->next = next->next;
	next->next->prev = *stk;
	next->next = *stk;
	*stk = next;
}
