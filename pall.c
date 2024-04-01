#include "monty.h"

/**
 * m_pall - print the stack
 * @hd: stack head
 * @line_num: used non
 *
 * Return: void
 */
void m_pall(stack_t **hd, unsigned int line_num)
{
	stack_t *h;
	(void)line_num;

	h = *hd;
	if (h == NULL)
		return;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
}
