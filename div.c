#include "monty.h"

/**
 * m_div - divide the two top elements of the stack
 * @hd: stack head
 * @line_num: line number
 *
 * Return: void
 */
void m_div(stack_t **hd, unsigned int line_num)
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
		fprintf(stderr, "L%d: can't div, stack too short\n", line_num);

		fclose(bus.file);
		free(bus.content);
		free_stack(*hd);
		exit(EXIT_FAILURE);
	}
	h = *hd;
	if (h->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_num);

		fclose(bus.file);
		free(bus.content);
		free_stack(*hd);
		exit(EXIT_FAILURE);
	}
	aux = h->next->n / h->n;
	h->next->n = aux;
	*hd = h->next;
	free(h);
}
