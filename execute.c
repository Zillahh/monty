#include "monty.h"

/**
 * m_execute - executes opcode
 * @stk: head linked list
 * @line_num: line_number
 * @file: pointer to monty
 * @content: line content
 *
 * Return: void
 */
int m_execute(char *content, stack_t **stk, unsigned int line_num, FILE *file)
{
	instruction_t
		opst[] = {

			{"push", m_push}, {"pall", m_pall}, {"pint", m_pint}, {"pop", m_pop},
			{"swap", m_swap}, {"add", m_add}, {"nop", m_nop},
			{"sub", m_sub}, {"div", m_div}, {"mul", m_mul}, {"mod", m_mod},
			{"pchar", m_pchar}, {"pstr", m_pstr},
			{"rotl", m_rotl}, {"rotr", m_rotr}, {"queue", m_queue}, {"stack", m_stack},
			{NULL, NULL}

		};
	unsigned int i = 0;
	char *op;

	op = strtok(content, " \n\t");
	if (op && op[0] == '#')
		return (0);
	bus.arg = strtok(NULL, "\n\t");
	while (opst[i].opcode && op)
	{
		if (strcmp(op, opst[i].opcode) == 0)
		{
			opst[i].f(stk, line_num);
			return (0);
		}
		i++;
	}
		if (op && opst[i].opcode == NULL)
		{
			fprintf(stderr, "L%d: unknown instruction %s\n", line_num, op);

			fclose(file);

			free(content);

			free_stack(*stk);

			exit(EXIT_FAILURE);

		}
		return (1);
}
