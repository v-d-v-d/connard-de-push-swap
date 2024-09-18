/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdunatte <vdunatte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 00:15:04 by vdunatte          #+#    #+#             */
/*   Updated: 2024/09/06 01:36:25 by vdunatte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include "newlibft/libft.h"
# include "move/move.h"



int		str_isdigit(const char *str);
int		sort_ok(t_list *first, int i);
void	print_lst(t_list *first);

void	for_less_5(t_list *first);
void	sort(t_list *stack_a);

#endif
