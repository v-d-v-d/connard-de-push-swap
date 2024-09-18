/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdunatte <vdunatte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 05:00:54 by vdunatte          #+#    #+#             */
/*   Updated: 2024/09/05 01:47:44 by vdunatte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "move.h"

// met le 1er src dans dst (dst est la stack qui corespond a la lettre)

void	push_stack(t_list **scr, t_list **dst)
{
	t_list	*temp;

	temp = *scr;
	*scr = (*scr)->next;
	temp->next = *dst;
	*dst = temp;
}

void	pa_pb(t_list **stack_a, t_list **stack_b, char c)
{
	if (c == 'a')
	{
		push_stack(stack_b, stack_a);
		write(STDOUT_FILENO, "pa", 2);
	}
	if (c == 'b')
	{
		push_stack(stack_a, stack_b);
		write(STDOUT_FILENO, "pb", 2);
	}
	write(STDERR_FILENO, "\n", 1);
}
