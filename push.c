#include "monty.h"
#include <ctype.h>

/**
 * verify_digit - checks that a string contains digits only
 * @input_string: the string been checked
 *
 * Return: 0 for digits only, else 1
 */
static int verify_digit(char *input_string)
{
	int index;

	for (index = 0; input_string[index]; index++)
	{
		if (input_string[index] == '-' && index == 0)
			continue;
		if (isdigit(input_string[index]) == 0)
			return (1);
	}
	return (0);
}

/**
 * push_stack - add an integer to the stack
 * @stk: pointer to the stack head
 * @line_num: line number
 *
 * Return: no return
 */
void push_stack(stack_t **stk, unsigned int line_num)
{
	char *argument;
	int value;

	argument = strtok(NULL, "\n\t\r ");
	if (argument == NULL || verify_digit(argument))
	{
		fpintf(STDOUT_FILENO,
				"L%u: usage: push integer\n",
				line_num);
		exit(EXIT_FAILURE);
	}
	value = atoi(argument);
	if (!add_node(stk, value))
	{
		fprintf(STDOUT_FILENO, "Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	stack_lenght++;
}
