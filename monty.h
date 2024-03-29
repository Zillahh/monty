#ifndef _MONTY_H_
#define _MONTY_H_

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <ctype.h>

/** 
 * struct var_s - struct containing the main variables of the Monty interpreter 
 * @queue: flag to determine if in stack vs queue mode 
 * @stack_length: length of the stack 
 */ 
typedef struct var_s
{ 
	int queue; 
	size_t stack_length; 
} var_t; 

#define STACK 0 
#define QUEUE 1 

/* global struct to hold flag for queue and stack length */ 
extern var_t b;



/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;

/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;


void push_stack(stack_t **stk, unsigned int line_num);
void print_stack(stack_t **stk, unsigned int line_num);
void print_top_value(stack_t **stk, unsigned int line_num);
void pop_top_element(stack_t **stk, unsigned int line_num);
void swap_top_two_elements(stack_t **stk, unsigned int line_num);
void add_top_two_elements(stack_t **stk, unsigned int line_num);
void do_nothing(stack_t **stk, unsigned int line_num);
void subtract_top_element(stack_t **stk, unsigned int line_num);
stack_t *add_new_node(stack_t **stk, const int value);

#endif /*_MONTY_H_ */
