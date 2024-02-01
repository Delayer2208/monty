#include "monty.h"

/**
 *  * op_pall - print everything in stack
 *   * @stack: pointer to pointer of first node
 *    * @counter: line counter (not used)
 *     *
 *      * Return: none
 *       */
void op_pall(stack_t **stack, unsigned int counter)
{
	    stack_t *h;
	        (void)counter;

		    h = *stack;
		        if (h == NULL)
				        return;

			    while (h)
				        {
						        printf("%d\n", h->n);
							        h = h->next;
								    }
}

/**
 *  * op_swap - swap first two elements of stack
 *   * @stack: first node
 *    * @counter: line counter
 *     *
 *      * Return: none
 *       */
void op_swap(stack_t **stack, unsigned int counter)
{
	    stack_t *h;
	        int length = 0, temp;

		    h = *stack;
		        while (h)
				    {
					            h = h->next;
						            length++;
							        }

			    if (length < 2)
				        {
						        fprintf(stderr, "L%d: can't swap, stack too short\n", counter);
							        fclose(bus.file);
								        free(bus.content);
									        free_stack(*stack);
										        exit(EXIT_FAILURE);
											    }

			        h = *stack;
				    temp = h->n;
				        h->n = h->next->n;
					    h->next->n = temp;
}

