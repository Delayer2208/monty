#include "monty.h"

/**
 *  * execute_operation - execute opcode
 *   * @content: line content
 *    * @stack: stack of linked list
 *     * @counter: line counter
 *      * @file: pointer to monty file stream
 *       *
 *        * Return: none
 *         */
int execute_operation(char *content, stack_t **stack, unsigned int counter, FILE *file)
{
	    instruction_t opcodes[] = {
		            {"push", op_push}, {"pall", op_pall}, {"pint", op_pint},
			            {"pop", op_pop},
				            {"swap", op_swap},
					            {"add", op_add},
						            {"nop", op_nop},
							            {"sub", op_sub},
								            {"div", op_div},
									            {"mul", op_mul},
										            {"mod", op_mod},
											            {"pchar", op_pchar},
												            {"pstr", op_pstr},
													            {"rotl", op_rotl},
														            {"rotr", op_rotr},
															            {"queue", op_queue},
																            {"stack", op_stack},
																	            {NULL, NULL}
			        };
	        unsigned int i = 0;
		    char *opcode;

		        opcode = strtok(content, " \n\t");
			    if (opcode && opcode[0] == '#')
				            return (0);

			        bus.arg = strtok(NULL, " \n\t");
				    while (opcodes[i].opcode && opcode)
					        {
							        if (strcmp(opcode, opcodes[i].opcode) == 0)
									        {
											            opcodes[i].f(stack, counter);
												                return (0);
														        }
								        i++;
									    }

				        if (opcode && opcodes[i].opcode == NULL)
						    {
							            fprintf(stderr, "L%d: unknown instruction %s\n", counter, opcode);
								            fclose(file);
									            free(content);
										            free_stack(*stack);
											            exit(EXIT_FAILURE);
												        }

					    return (1);
}

