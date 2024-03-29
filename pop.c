#include "monty.h"

/**
 * pop_top_element - pop the top element of the stack
 * @stk: pointer to head
 * @line_num: line number
 *
 * Return:no return
 */
void pop_top_element(stack_t **stk, unsigned int line_num)
{
	stack_t *pop = *stk;

	if (b.stack_length == 0)
	{
		fprintf(stderr,
				"L%u: can't pop an empty stack\n",
				line_num);
		exit(EXIT_FAILURE);
	}
	(*stk)->next->prev = (*stk)->prev;
	(*stk)->prev->next = (*stk)->next;
	if (b.stack_length != 1)
		*stk = (*stk)->next;
	else
		*stk =NULL;
	free(pop);
	b.stack_length--;
}
