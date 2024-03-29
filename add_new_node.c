#include "monty.h"

/**
 * add_new_node -adds new node to the list
 * @stk: pointer to the head
 * @value: element to add to the new node
 *
 * Return: pointer to new node or NULL on failure
 */
stack_t *add_new_node(stack_t **stk, const int value)
{
	stack_t *new_node;

	if (stk == NULL)
		return (NULL);
	new_node =
		malloc(sizeof(stack_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n  = value;
	if (*stk == NULL)
	{
		new_node->prev = new_node;
		new_node->next = new_node;
	}
	else
	{
		(*stk)->prev->prev = new_node;
		new_node->prev = (*stk)->prev;
		(*stk)->prev = new_node;
		new_node->next = *stk;
	}
	if (b.queue == STACK || b.stack_length == 0)
		*stk = new_node;
	return (new_node);
}
