#include "monty.h"

/**
 * print_stack - prints the stack
 * @stk: pointer to the head
 * @line_num: line number to be executed
 *
 * Return: void
 */
void print_stack(stack_t **stk, unsigned int line_num)
{
	stack_t *hd;

	(void)(line_num);

	hd = *stk;
	while (hd != NULL)
	{
		printf("%d\n", hd->n);
		hd =hd->next;
		if (hd == *stk)
		{
			return;
		}
	}
}
