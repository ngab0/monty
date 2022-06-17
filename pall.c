#include "monty.h"

/**
 * pall - prints the stack
 * @stack: stack given by main in start.c
 * @count: amount of lines
 *
 * Return: void
 */
void pall(stack_t **stack, unsigned int count __attribute__((unused)))
{
	print_stack(*stack);
}
