#include "monty.h"

/**
 *  * push_node - add node to top of stack
 *   * @stack: first node
 *    * @n: new value
 *     *
 *      * Return: none
 *       */
void push_node(stack_t **stack, int n)
{
	    stack_t *new_node, *temp;

	        temp = *stack;
		    new_node = malloc(sizeof(stack_t));

		        if (new_node == NULL)
				    {
					            fprintf(stderr, "Error: malloc failed\n");
						            exit(EXIT_FAILURE);
							        }

			    if (temp)
				            temp->prev = new_node;

			        new_node->n = n;
				    new_node->next = *stack;
				        new_node->prev = NULL;
					    *stack = new_node;
}

