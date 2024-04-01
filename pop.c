#include "monty.h"

/**
 * m_pop - prints the top
 * @hd: stack head
 * @line_num: line number
 *
 * Return: void
 */
void m_pop(stack_t **hd, unsigned int line_num)
{
	stack_t *h;

	if (*hd == NULL)
	{
		fprintf(stderr, "L%d: can't pop an empty stack\n", line_num);
		fclose(bus.file);
		free(bus.content);
		free_stack(*hd);
		exit(EXIT_FAILURE);
	}
	h = *hd;
	*hd = h->next;
	free(h);
}
