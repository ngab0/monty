#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "monty.h"

/**
 * pint - print the value at the top of the stack
 * @stack: stack given by main in start.c
 * @count: amount of lines
 * Return: void
 */
void pint(stack_t **stack, unsigned int count)
{
	if (!stack || !(*stack))
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", count);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*stack)->n);
}
