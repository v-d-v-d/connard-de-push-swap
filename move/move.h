/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdunatte <vdunatte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 03:01:23 by vdunatte          #+#    #+#             */
/*   Updated: 2024/09/06 01:44:07 by vdunatte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MOVE_H
# define MOVE_H
# include "../newlibft/libft.h"
# include "../push_swap.h"

void	sa_sb_ss(t_list *stack_a, t_list *stack_b);
void	ra_rb_rr(t_list **stack_a, t_list **stack_b);
void	rra_rrb_rrr(t_list **stack_a, t_list **stack_b);
void	pa_pb(t_list **stack_a, t_list **stack_b, char c);

void	swap_stack(t_list *first);

#endif
