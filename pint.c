#include "monty.h"

/**
 * m_pint - prints the top
 * @hd: stack head
 * @line_num: line number
 *
 * Return: void
 */
void m_pint(stack_t **hd, unsigned int line_num)
{
	if (*hd == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", line_num);
		fclose(bus.file);
		free(bus.content);
		free_stack(*hd);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*hd)->n);
}
