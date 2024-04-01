#include "monty.h"

/**
 * m_rotl - rotates the stack
 * @hd: stack head
 * @line_num: line number
 *
 * Return: void
 */
void m_rotl(stack_t **hd, __attribute__((unused))unsigned int line_num)
{
	stack_t *tmp = *hd, *aux;

	if (*hd == NULL || (*hd)->next == NULL)
	{
		return;
	}
	aux = (*hd)->next;
	aux->prev = NULL;
	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = *hd;
	(*hd)->next = NULL;
	(*hd)->prev = tmp;
	(*hd) = aux;
}
