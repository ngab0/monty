#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include "monty.h"

/**
 * _add -  adds the first two nodes of the stack
 * @stack: stack given by main
 * @count: line counter
 *
 * Return: void
 */
void _add(stack_t **stack, unsigned int count)
{
	int result;

	if (!stack || !*stack || !((*stack)->next))
	{
		fprintf(stderr, "L%d: can't add, stack too short\n", count);
		exit(EXIT_FAILURE);
	}

	result = ((*stack)->next->n) + ((*stack)->n);
	pop(stack, count); /*For top node*/
	(*stack)->n = result;
}
