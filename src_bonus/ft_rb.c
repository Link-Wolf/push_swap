/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xxxxxxx <xxxxxxx@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 15:14:48 by xxxxxxx           #+#    #+#             */
/*   Updated: 2022/03/11 17:10:22 by xxxxxxx          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap_bonus.h"

void	ft_rb(t_stacks **stk)
{
	t_list	**b_ptr;
	t_list	*b_next;

	if (ft_lstsize(*((*stk)->b)) > 1)
	{
		b_ptr = (*stk)->b;
		b_next = (*b_ptr)->nx;
		ft_lstlast(*b_ptr)->nx = *b_ptr;
		(*b_ptr)->nx = NULL;
		*b_ptr = b_next;
	}
}

void	ft_rrb(t_stacks **stk)
{
	t_list	**b_ptr;
	t_list	*b_last;

	if (ft_lstsize(*((*stk)->b)) > 1)
	{
		b_ptr = (*stk)->b;
		b_last = ft_lstlast(*b_ptr);
		ft_lstcalendar(*b_ptr, ft_lstsize(*b_ptr) - 2)->nx = NULL;
		b_last->nx = *b_ptr;
		*b_ptr = b_last;
	}
}
