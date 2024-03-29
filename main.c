#include "monty.h"

var_t global_b;

/**
 * main -Monty interpreter
 * @argc: number of arguments
 * @argv: arguments string array
 *
 * Return: EXIT_FAILURE on failure, EXIT_SUCCESS on success
 */
int main(int argc, char *argv[])
{
	stack_t *stk = NULL;
	unsigned int line_num = 0;
	FILE *file_stream = NULL;
	char *line_buffer = NULL, *opcode = NULL;
	size_t buffer_size = 0;

	global_b.queue = 0;
	global_b.stack_length = 0;
	if (argc != 2)
	{
		fprintf(stderr, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	file_stream =fopen(argv[1], "r");
	if (file_stream -- NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	on_exit(free_line_buffer, &line_buffer);
	on_exit(free_stack, &stk);
	on_exit(close_file_stream, file_stream);
	while (getline(&line_buffer, &buffer_size, file_stream) != -1)
	{
		line_num++;
		opcode = strtok(line_buffer, "\n\t\r");
		if (opcode != NULL && opcode[0] != '#')
		{
			get_opcode(opcode, &stk, line_num);
		}
	}
	exit(EXIT_SUCCESS);
}
