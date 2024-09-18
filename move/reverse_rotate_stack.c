/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate_stack.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdunatte <vdunatte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 05:23:45 by vdunatte          #+#    #+#             */
/*   Updated: 2024/09/06 01:43:46 by vdunatte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "move.h"

// decale tout de 1 le dernier devien le 1er

void	reverse_rotate_stack(t_list **first)
{
	t_list	*temp;
	t_list	*temp2;

	if (*first == NULL)
		return ;
	if ((*first)->next == NULL)
		return ;
	temp = *first;
	while (temp->next->next != NULL)
		temp = temp->next;
	temp2 = temp->next;
	temp->next = NULL;
	temp2->next = *first;
	*first = temp2;
}

void	rra_rrb_rrr(t_list **stack_a, t_list **stack_b)
{
	if (stack_a != NULL && stack_b == NULL)
	{
		reverse_rotate_stack(stack_a);
		write(STDOUT_FILENO, "rra", 3);
	}
	if (stack_a == NULL && stack_b != NULL)
	{
		reverse_rotate_stack(stack_b);
		write(STDOUT_FILENO, "rrb", 3);
	}
	if (stack_a != NULL && stack_b != NULL)
	{
		reverse_rotate_stack(stack_a);
		reverse_rotate_stack(stack_b);
		write(STDOUT_FILENO, "rrr", 3);
	}
	write(STDERR_FILENO, "\n", 1);
}
