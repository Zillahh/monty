#include "monty.h"

/**
 * m_rotr - rotates the stack to the bottom
 * @hd: stack head
 * @line_num: line number
 *
 * Return: void
 */
void m_rotr(stack_t **hd, __attribute__((unused))unsigned int line_num)
{
	stack_t *copy;

	copy = *hd;

	if (*hd == NULL || (*hd)->next == NULL)
	{
		return;
	}
	while (copy->next)
	{
		copy = copy->next;
	}
	copy->next = *hd;
	copy->prev->next = NULL;
	copy->prev = NULL;
	(*hd)->prev = copy;
	(*hd) = copy;
}
