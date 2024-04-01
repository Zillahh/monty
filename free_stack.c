#include "monty.h"

/**
 * free_stack - frees a linked list
 * @hd: stack head
 *
 * Return: void
 */
void free_stack(stack_t *hd)
{
	stack_t *aux;

	aux = hd;
	while (hd)
	{
		aux = hd->next;
		free(hd);
		hd = aux;
	}
}
