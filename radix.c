/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdunatte <vdunatte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 06:21:51 by vdunatte          #+#    #+#             */
/*   Updated: 2024/09/21 06:32:06 by vdunatte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	radix2(t_list **stack_a, t_list **stack_b, int i)
{
	if ((((*stack_b)->index >> i) & 1) == 1)
		pa_pb(stack_a, stack_b, 'a');
	else
		ra_rb_rr(NULL, stack_b);
}

void	radix3(t_list **stack_a, t_list **stack_b, int i)
{
	if ((((*stack_a)->index >> i) & 1) == 0)
		pa_pb(stack_a, stack_b, 'b');
	else
		ra_rb_rr(stack_a, NULL);
}

void	radix(t_list *stack_a, t_list *stack_b)
{
	int	st_size_a;
	int	st_size_b;
	int	num_bits;
	int	i;
	int	j;

	st_size_a = ft_lstsize(stack_a);
	num_bits = 0;
	i = -1;
	while (((st_size_a - 1) >> num_bits) != 0)
		num_bits++;
	while (++i < num_bits)
	{
		j = 0;
		st_size_b = ft_lstsize(stack_b);
		while (st_size_b-- > 0)
			radix2(&stack_a, &stack_b, i);
		j = 0;
		st_size_a = ft_lstsize(stack_a);
		while (st_size_a-- > 0)
			radix3(&stack_a, &stack_b, i);
	}
	while (stack_b != NULL)
		pa_pb(&stack_a, &stack_b, 'a');
}

void	sort(t_list *stack_a)
{
	int		i;
	t_list	*stack_b;

	stack_b = NULL;
	i = ft_lstsize(stack_a);
	if (sort_ok(stack_a, 0))
		return ;
	if (i <= 5)
		for_less_5(stack_a);
	if (i > 5)
		radix(stack_a, stack_b);
}
