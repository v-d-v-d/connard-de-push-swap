/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_stack.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdunatte <vdunatte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 05:21:09 by vdunatte          #+#    #+#             */
/*   Updated: 2024/09/06 01:42:50 by vdunatte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "move.h"

// decale tout de 1 le 1er devien le dernier

void	rotate_stack(t_list **stack)
{
	t_list	*temp;

	if (*stack == NULL)
		return ;
	if ((*stack)->next == NULL)
		return ;
	temp = *stack;
	*stack = (*stack)->next;
	temp->next = NULL;
	(ft_lstlast(*stack))->next = temp;
}

void	ra_rb_rr(t_list **stack_a, t_list **stack_b)
{
	if (stack_a != NULL && stack_b == NULL)
	{
		rotate_stack(stack_a);
		write(STDOUT_FILENO, "ra", 2);
	}
	if (stack_a == NULL && stack_b != NULL)
	{
		rotate_stack(stack_b);
		write(STDOUT_FILENO, "rb", 2);
	}
	if (stack_a != NULL && stack_b != NULL)
	{
		rotate_stack(stack_a);
		rotate_stack(stack_b);
		write(STDOUT_FILENO, "rr", 2);
	}
	write(STDERR_FILENO, "\n", 1);
}
