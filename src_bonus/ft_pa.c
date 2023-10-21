/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pa.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xxxxxxx <xxxxxxx@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 15:14:52 by xxxxxxx           #+#    #+#             */
/*   Updated: 2022/03/11 17:10:43 by xxxxxxx          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap_bonus.h"

void	ft_pa(t_stacks **stk)
{
	t_list	**b_ptr;
	t_list	**a_ptr;
	t_list	*b;

	if (*((*stk)->b))
	{
		b_ptr = (*stk)->b;
		a_ptr = (*stk)->a;
		b = *((*stk)->b);
		*b_ptr = b->nx;
		b->nx = *a_ptr;
		*a_ptr = b;
	}
}
