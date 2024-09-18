/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   for_less_5.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdunatte <vdunatte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 03:09:44 by vdunatte          #+#    #+#             */
/*   Updated: 2024/09/06 01:54:00 by vdunatte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	for_3(t_list *first, int i)
{
	if (first->index == i)
	{
		sa_sb_ss(first, NULL);
		return (ra_rb_rr(&first, NULL));
	}
	if (first->next->next->index == i + 2)
		return (sa_sb_ss(first, NULL));
	if (first->index == i + 1)
		return (rra_rrb_rrr(&first, NULL));
	if (first->next->index == i + 1)
	{
		sa_sb_ss(first, NULL);
		return (rra_rrb_rrr(&first, NULL));
	}
	if (first->next->index == i)
		return (ra_rb_rr(&first, NULL));
}

void	for_4(t_list *stack_a)
{
	t_list	*stack_b;

	stack_b = NULL;
	if (stack_a->next->index == 0 || stack_a->next->index == 3)
		sa_sb_ss(stack_a, NULL);
	if (stack_a->next->next->next->index == 0
		|| stack_a->next->next->next->index == 3)
		rra_rrb_rrr(&stack_a, NULL);
	pa_pb(&stack_a, &stack_b, 'b');
	if (stack_b->index == 0 && !sort_ok(stack_a->next, 1))
		for_3(stack_a, 1);
	if (stack_b->index == 3 && !sort_ok(stack_a->next, 0))
		for_3(stack_a, 0);
	pa_pb(&stack_a, &stack_b, 'a');
	if (stack_a->index == 3)
		ra_rb_rr(&stack_a, NULL);
}

void	for_5_2(t_list **stack_a)
{
	if ((*stack_a)->next->index == 0 || (*stack_a)->next->index == 1)
		ra_rb_rr(stack_a, NULL);
	else if ((*stack_a)->next->next->next->next->index == 0
		|| (*stack_a)->next->next->next->next->index == 1)
		rra_rrb_rrr(stack_a, NULL);
	else
	{
		ra_rb_rr(stack_a, NULL);
		ra_rb_rr(stack_a, NULL);
	}
}

void	for_5(t_list *stack_a)
{
	t_list	*stack_b;

	stack_b = NULL;
	if (stack_a->index != 0 && stack_a->index != 1)
		for_5_2(&stack_a);
	pa_pb(&stack_a, &stack_b, 'b');
	if (stack_a->next->next->index == 0 || stack_a->next->next->index == 1)
		rra_rrb_rrr(&stack_a, NULL);
	if (stack_a->next->next->next->index == 0
		|| stack_a->next->next->next->index == 1)
		rra_rrb_rrr(&stack_a, NULL);
	if (stack_a->next->index == 0 || stack_a->next->index == 1)
		ra_rb_rr(&stack_a, NULL);
	pa_pb(&stack_a, &stack_b, 'b');
	if (stack_b->index == 0)
		sa_sb_ss(NULL, stack_b);
	if (!sort_ok(stack_a, 2))
		for_3(stack_a, 2);
	pa_pb(&stack_a, &stack_b, 'a');
	pa_pb(&stack_a, &stack_b, 'a');
}

void	for_less_5(t_list *stack_a)
{
	int	i;

	i = ft_lstsize(stack_a);
	if (i == 3)
		for_3(stack_a, 0);
	if (i == 4)
		for_4(stack_a);
	if (i == 5)
		for_5(stack_a);
	if (i == 2)
		if ((stack_a)->index == 1)
			sa_sb_ss(stack_a, NULL);
}
