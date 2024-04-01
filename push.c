#include "monty.h"

/**
 * m_push - add node to the stack
 * @hd: stack head
 * @line_num: line number
 *
 * Return: void
 */
void m_push(stack_t **hd, unsigned int line_num)
{
	int value, j = 0, flag = 0;

	if (bus.arg)
	{
		if (bus.arg[0] == '-')
			j++;
		for (; bus.arg[j] != '\0'; j++)
		{
			if (bus.arg[j] > 57 ||
					bus.arg[j] < 48)

				flag = 1; }
		if (flag == 1)
		{
			fprintf(stderr, "L%d: usage: push integer\n", line_num);
			fclose(bus.file);
			free(bus.content);
			free_stack(*hd);
			exit(EXIT_FAILURE); }}
	else
	{ fprintf(stderr, "L%d: usage: push integer\n", line_num);
		fclose(bus.file);
		free(bus.content);
		free_stack(*hd);
		exit(EXIT_FAILURE); }
	value = atoi(bus.arg);
	if (bus.lifi == 0)
		m_addnode(hd, value);
	else
		addqueue(hd, value);
}
