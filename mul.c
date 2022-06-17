#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include "monty.h"

/**
 * _mul - divides the next top value by the top value
 * @stack: stack given by main
 * @count: line counter
 *
 * Return: void
 */
void _mul(stack_t **stack, unsigned int count)
{
	int result;

	if (!stack || !*stack || !((*stack)->next))
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", count);
		exit(EXIT_FAILURE);
		return;
	}

	result = ((*stack)->next->n) * ((*stack)->n);
	pop(stack, count);/*For top node*/
	(*stack)->n = result;
}
