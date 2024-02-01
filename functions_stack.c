#include "monty.h"

/**
 *  * op_pop - print top node on stack
 *   * @stack: pointer to pointer of first node
 *    * @counter: line counter
 *     *
 *      * Return: none
 *       */
void op_pop(stack_t **stack, unsigned int counter)
{
	    stack_t *h;

	        if (*stack == NULL)
			    {
				            fprintf(stderr, "L%d: can't pop an empty stack\n", counter);
					            fclose(bus.file);
						            free(bus.content);
							            free_stack(*stack);
								            exit(EXIT_FAILURE);
									        }

		    h = *stack;
		        *stack = h->next;
			    free(h);
}

/**
 *  * op_pint - print top node on stack
 *   * @stack: pointer to pointer of first node
 *    * @counter: line counter
 *     *
 *      * Return: none
 *       */
void op_pint(stack_t **stack, unsigned int counter)
{
	    if (*stack == NULL)
		        {
				        fprintf(stderr, "L%u: can't pint, stack empty\n", counter);
					        fclose(bus.file);
						        free(bus.content);
							        free_stack(*stack);
								        exit(EXIT_FAILURE);
									    }

	        printf("%d\n", (*stack)->n);
}

/**
 *  * op_nop - do nothing
 *   * @stack: pointer to pointer of first node
 *    * @counter: line counter
 *     *
 *      * Return: none
 *       */
void op_nop(stack_t **stack, unsigned int counter)
{
	    (void)counter;
	        (void)stack;
}

