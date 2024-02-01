#include "monty.h"

/**
 *  * op_queue - print first node of queue
 *   * @head: first node of queue (unused)
 *    * @counter: line counter (unused)
 *     *
 *      * Return: none
 *       */
void op_queue(stack_t **head, unsigned int counter)
{
	    (void)head;
	        (void)counter;

		    bus.lifi = 1;
}

/**
 *  * add_queue - add node to tail of queue
 *   * @n: new value
 *    * @head: head of the queue
 *     *
 *      * Return: none
 *       */
void add_queue(stack_t **head, int n)
{
	    stack_t *new_node, *temp;

	        temp = *head;
		    new_node = malloc(sizeof(stack_t));

		        if (new_node == NULL)
				    {
					            fprintf(stderr, "Error: malloc failed\n");
						            exit(EXIT_FAILURE);
							        }

			    new_node->n = n;
			        new_node->next = NULL;

				    if (temp)
					        {
							        while (temp->next)
									            temp = temp->next;
								    }
				        if (!temp)
						    {
							            *head = new_node;
								            new_node->prev = NULL;
									        }
					    else
						        {
								        temp->next = new_node;
									        new_node->prev = temp;
										    }
}

