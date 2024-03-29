#include "monty.h"

/**
 * print_top_value - print the top of the stack
 * @stk: pointer to the head
 * @line_num: line number
 *
 * Return: no return
 */
void print_top_value(stack_t **stk, unsigned int line_num)
{
	stack_t *hd = *stk;

	if (b.stack_length == 0)
	{
		fprintf(stderr,
				"L%u: can't pint, stack empty\n",
				line_num);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", hd->n);
}
