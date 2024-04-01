#include "monty.h"

/**
 * m_pstr - prints the string from the top of the stack
 * @hd: stack head
 * @line_num: line number
 *
 * Return: void
 */
void m_pstr(stack_t **hd, unsigned int line_num)
{
	stack_t *h;
	(void)line_num;

	h = *hd;
	while (h)
	{
		if (h->n > 127 || h->n <= 0)
		{
			break;
		}

		printf("%c", h->n);
		h = h->next;
	}
	printf("\n");
}
