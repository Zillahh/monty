#include "monty.h"

/**
 * m_pchar - print the character at the top of the stack
 * @hd: stack head
 * @line_num: line number
 *
 * Return: void
 */
void m_pchar(stack_t **hd, unsigned int line_num)
{
	stack_t *h;

	h = *hd;
	if (!h)
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", line_num);
		fclose(bus.file);
		free_stack(*hd);
		exit(EXIT_FAILURE);
	}
	if (h->n > 127 || h->n < 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", line_num);
		fclose(bus.file);
		free(bus.content);
		free_stack(*hd);
		exit(EXIT_FAILURE);
	}
	printf("%c\n", h->n);
}
