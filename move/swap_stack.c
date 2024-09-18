/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdunatte <vdunatte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 03:01:50 by vdunatte          #+#    #+#             */
/*   Updated: 2024/09/04 22:31:24 by vdunatte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "move.h"

void	swap_stack(t_list *first)
{
	int	temp;

	if (first == NULL)
		return ;
	if (first->next == NULL)
		return ;
	temp = first->index;
	first->index = first->next->index;
	first->next->index = temp;
	temp = first->value;
	first->value = first->next->value;
	first->next->value = temp;
}

void	sa_sb_ss(t_list *stack_a, t_list *stack_b)
{
	if (stack_a != NULL && stack_b == NULL)
	{
		swap_stack(stack_a);
		write(STDOUT_FILENO, "sa", 2);
	}
	if (stack_a == NULL && stack_b != NULL)
	{
		swap_stack(stack_b);
		write(STDOUT_FILENO, "sb", 2);
	}
	if (stack_a != NULL && stack_b != NULL)
	{
		swap_stack(stack_a);
		swap_stack(stack_b);
		write(STDOUT_FILENO, "ss", 2);
	}
	write(STDERR_FILENO, "\n", 1);
}
