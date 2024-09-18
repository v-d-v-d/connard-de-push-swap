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

void	check(t_list **main, t_list **other, int i)
{
	int	size;

	size = ft_lstsize(main)
	while (size > 0)
	{
		/* code */
	}
	
}

void	radix(t_list *stack_a)
{
	t_list	*stack_b;
	int		i;
	
	i = 0;
	while (i == 8)
	{
		while (/* condition */)
		{
			/* code */
		}
		while (/* condition */)
		{
			/* code */
		}
		
		i++;
	}
	
}

void	sort(t_list *stack_a)
{
	int		i;

	print_lst(stack_a); // 
	i = ft_lstsize(stack_a);
	if (sort_ok(stack_a, 0))
		return ;
	if (i <= 5)
		for_less_5(stack_a);
	if (i > 5)
		radix(stack_a);
}
