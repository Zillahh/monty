#include "monty.h"

/**
 * m_addnode - add node to the stack
 * @hd: stack head
 * @value: new value
 *
 * Return: void
 */
void m_addnode(stack_t **hd, int value)
{
	stack_t *new_node, *aux;

	aux = *hd;
	new_node = malloc(sizeof(stack_t));
	if (new_node == NULL)
	{
		printf("Error\n");
		exit(0);
	}
	if (aux)
		aux->prev = new_node;
	new_node->n = value;
	new_node->next = *hd;
	new_node->prev = NULL;
	*hd = new_node;
}
