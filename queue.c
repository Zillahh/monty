#include "monty.h"

/**
 * m_queue - prints the top
 * @hd: stack head
 * @line_num: line number
 *
 * Return: void
 */
void m_queue(stack_t **hd, unsigned int line_num)
{
	(void)hd;
	(void)line_num;
	bus.lifi = 1;
}

/**
 * m_addqueue - add node to the tail stack
 * @value: new value
 * @hd: stack head
 *
 * Return: void
 */
void m_addqueue(stack_t **hd, int value)
{
	stack_t *new_node, *aux;

	aux = *hd;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		printf("Error\n");
	}
	new_node->n = value;
	new_node->next = NULL;
	if (aux)
	{
		while (aux->next)

			aux = aux->next;
	}
	if (!aux)
	{
		*hd = new_node;
		new_node->prev = NULL;
	}
	else
	{
		aux->next = new_node;
		new_node->prev = aux;
	}
}
