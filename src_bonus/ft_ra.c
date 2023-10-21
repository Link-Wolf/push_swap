/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ra.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xxxxxxx <xxxxxxx@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 15:14:48 by xxxxxxx           #+#    #+#             */
/*   Updated: 2022/03/11 17:10:17 by xxxxxxx          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap_bonus.h"

void	ft_ra(t_stacks **stk)
{
	t_list	**a_ptr;
	t_list	*a_next;

	if (ft_lstsize(*((*stk)->a)) > 1)
	{
		a_ptr = (*stk)->a;
		a_next = (*a_ptr)->nx;
		ft_lstlast(*a_ptr)->nx = *a_ptr;
		(*a_ptr)->nx = NULL;
		*a_ptr = a_next;
	}
}

void	ft_rra(t_stacks **stk)
{
	t_list	**a_ptr;
	t_list	*a_last;

	if (ft_lstsize(*((*stk)->a)) > 1)
	{
		a_ptr = (*stk)->a;
		a_last = ft_lstlast(*a_ptr);
		ft_lstcalendar(*a_ptr, ft_lstsize(*a_ptr) - 2)->nx = NULL;
		a_last->nx = *a_ptr;
		*a_ptr = a_last;
	}
}
