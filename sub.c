#include "monty.h"

/**
 * m_sub - subtraction
 * @hd: stack head
 * @line_num: line number
 *
 * Return: void
 */
void m_sub(stack_t **hd, unsigned int line_num)
{
	stack_t *aux;
	int sus, nodes;

	aux = *hd;
	for (nodes = 0; aux != NULL; nodes++)
		aux = aux->next;
	if (nodes < 2)
	{
		fprintf(stderr, "L%d: can't sub, stack too short\n", line_num);

		fclose(bus.file);
		free(bus.content);
		free_stack(*hd);
		exit(EXIT_FAILURE);
	}
	aux = *hd;
	sus = aux->next->n - aux->n;
	aux->next->n = sus;
	*hd = aux->next;
	free(aux);
}
