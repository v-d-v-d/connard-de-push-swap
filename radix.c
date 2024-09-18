/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdunatte <vdunatte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 06:21:51 by vdunatte          #+#    #+#             */
/*   Updated: 2024/09/15 01:25:20 by vdunatte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	radix(t_list *stack_a, t_list	*stack_b)
{
	int	st_size;
	int	num_bits;
	int	i;
	int	j;
	
	st_size = ft_lstsize(stack_a)
	num_bits = 0
	while (((st_size - 1) >> num_bits) != 0)
		num_bits++;
	while (i <= num_bits)
	{
		j = 0
		while (j < num_bits)
		{
			if ((((stack_a->)index >> i) & 1) == 0)
				pa_pb(stack_a, stack_b, 'b');
			else
				ra_rb_rr(stack_a, NULL);
			j++;
		}
		while (stack_b != NULL)
			pa_pb(stack_a, stack_b, 'a');
		i++;
	}
}

void	sort(t_list *stack_a)
{
	int		i;
	t_list	*stack_b;

	print_lst(stack_a); // 
	stack_b == NULL;
	i = ft_lstsize(stack_a);
	if (sort_ok(stack_a, 0))
		return ;
	if (i <= 5)
		for_less_5(stack_a);
	if (i > 5)
		radix(stack_a, stack_b);
}
