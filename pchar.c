#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "monty.h"

/**
 * pchar - prints the int at the top of the stack as char
 * @stack: stack given by main
 * @count: amount of lines
 *
 * Return: void
 */
void pchar(stack_t **stack, unsigned int count)
{
	if (!stack || !(*stack))
	{
		fprintf(stderr, "L%d: can't pchar, stack empty\n", count);
		exit(EXIT_FAILURE);
		return;
	}
	if (isascii((*stack)->n) == 0)
	{
		fprintf(stderr, "L%d: can't pchar, value out of range\n", count);
		exit(EXIT_FAILURE);
		return;
	}
	printf("%c\n", (*stack)->n);
}
