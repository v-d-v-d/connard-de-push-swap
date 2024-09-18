/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vdunatte <vdunatte@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 00:13:25 by vdunatte          #+#    #+#             */
/*   Updated: 2024/09/06 01:35:27 by vdunatte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	big_int(const char *str)
{
	int	i;

	i = ft_strlen(str);
	if (i < 10)
		return (0);
	else if (i == 10 && str[0] != '-' && ft_strncmp(str, "2147483647", i) <= 0)
		return (0);
	else if (i == 11 && str[0] == '-' && ft_strncmp(str, "-2147483648", i) >= 0)
		return (0);
	return (1);
}

void	add_index(t_list *first)
{
	int		index;
	t_list	*min_lst;
	t_list	*temp;

	index = 0;
	temp = first;
	min_lst = first;
	while (1)
	{
		temp = first;
		while (temp != NULL && temp->index != -1)
			temp = temp->next;
		min_lst = temp;
		if (min_lst == NULL)
			break ;
		temp = first;
		while (temp != NULL)
		{
			if (temp->value < min_lst->value && temp->index == -1)
				min_lst = temp;
			temp = temp->next;
		}
		min_lst->index = index;
		index++;
	}
}

int	check_dup(t_list *first, int value)
{
	if (first == NULL)
		return (0);
	if (first->value == value)
		return (1);
	return (check_dup(first->next, value)
		+ check_dup(first->next, first->value));
}

int	main(int argc, char const **argv)
{
	static t_list	*first = NULL;
	t_list			temp;

	if (argc == 1)
	{
		add_index(first);
		if (first == NULL || check_dup(first->next, first->value))
			return (ft_error("Error\n"));
		sort(first);
		return (0);
	}
	if (!str_isdigit(argv[1]) || argv[1][0] == '\0' || big_int(argv[1]))
		return (ft_error("Error\n"));
	temp.value = ft_atoi(argv[1]);
	temp.next = NULL;
	temp.index = -1;
	ft_lstadd_back(&first, &temp);
	return (main(--argc, ++argv));
}
