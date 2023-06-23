#include "monty.h"

/**
 * _mod - mod the top 2 values of the stack
 * @stack: pointer to top stack element
 * @line_number: element count
 */
void _mod(stack_t **stack, unsigned int line_number)
{
        stack_t *start;
        int hold;

        if (*stack == NULL || (*stack)->next == NULL)
        {
                fprintf(stderr, "L%d: can't mod, stack too short\n", line_number);
                free(*stack);
                exit(EXIT_FAILURE);
        }
	else if (*stack->n == 0)
	{
                fprintf(stderr, "L%d: division by zero\n", line_number);
                free(*stack);
                exit(EXIT_FAILURE);
        }
        else
        {
                start = *stack;

                hold = start->next->n % start->n;

                start->next->n = hold;
                *stack = start->next;
                free(start);
        }
}
