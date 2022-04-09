/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aer-razk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 17:52:33 by aer-razk          #+#    #+#             */
/*   Updated: 2022/04/01 17:52:35 by aer-razk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_rra(t_stacka *sa, int i)
{
	int	cmpt;
	int	ac;

	if (sa->ac != 0)
	{
		cmpt = sa->a[sa->ac - 1];
		ac = sa->ac;
		while (ac - 2 >= 0)
		{
			sa->a[ac - 1] = sa->a[ac - 2];
			ac--;
		}
		sa->a[0] = cmpt;
		if (i == 0)
			write(1, "rra\n", 4);
	}
}

void	ft_rrb(t_stackb *sb, int i)
{
	int	cmpt;
	int	bc;

	if (sb->bc != 0)
	{
		cmpt = sb->b[sb->bc - 1];
		bc = sb->bc;
		while (bc - 2 >= 0)
		{
			sb->b[bc - 1] = sb->b[bc - 2];
			bc--;
		}
		sb->b[0] = cmpt;
		if (i == 0)
			write(1, "rrb\n", 4);
	}
}

void	ft_rrr(t_stacka *sa, t_stackb *sb, int i)
{
	ft_rra(sa, i);
	ft_rrb(sb, i);
	if (i == 0)
		write(1, "rrr\n", 4);
}
