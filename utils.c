/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdunatte <vdunatte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 05:13:38 by vdunatte          #+#    #+#             */
/*   Updated: 2024/09/06 01:39:49 by vdunatte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	str_isdigit2(const char *str)
{
	if (str[0] == '\0')
		return (1);
	else if (ft_isdigit(str[0]))
		return (str_isdigit(str + 1));
	return (0);
}

int	str_isdigit(const char *str)
{
	if (str[0] == '-' && str[1] != '\0')
		str++;
	return (str_isdigit2(str));
}

int	sort_ok(t_list *first, int i)
{
	if (first == NULL)
		return (1);
	if (first->index != i)
		return (0);
	return (sort_ok(first->next, ++i));
}

void	print_lst(t_list *first)
{
	if (first == NULL)
		return ;
	ft_putnbr_fd(first->value, STDOUT_FILENO);
	write(STDERR_FILENO, " - ", 3);
	ft_putnbr_fd(first->index, STDOUT_FILENO);
	write(STDERR_FILENO, "\n", 1);
	print_lst(first->next);
}
