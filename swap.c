#include "monty.h"

/**
 * m_swap - adds the top two elements
 * @hd: stack head
 * @line_num: line number
 *
 * Return: void
 */
void m_swap(stack_t **hd, unsigned int line_num)
{
	stack_t *h;
	int length = 0, aux;

	h = *hd;
	while (h)
	{
		h = h->next;
		length++;
	}
	if (length < 2)
	{
		fprintf(stderr, "L%d: can't swap, stack too short\n", line_num);
		fclose(bus.file);
		free(bus.content);
		free_stack(*hd);
		exit(EXIT_FAILURE);
	}
	h = *hd;
	aux = h->n;
	h->n = h->next->n;
	h->next->n = aux;
}
