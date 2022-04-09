/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   send.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aer-razk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 17:50:17 by aer-razk          #+#    #+#             */
/*   Updated: 2022/04/07 17:50:18 by aer-razk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	send_half(t_stacka *sa, t_stackb *sb)
{
	int	*t;
	int	j;

	t = orderedtable(sa->a, sa->ac);
	j = sa->ac;
	while ((j * 4 / 5 < sa->ac || j % 5 != 0)
		&& (j * 4 / 5 + 1 < sa->ac || j % 5 == 0))
	{
		if (sa->a[0] < t[j / 5])
			ft_pb(sa, sb, 0);
		else
			ft_ra(sa, 0);
	}
}

void	send_max(t_stacka *sa, t_stackb *sb)
{
	int	*t;
	int	j;

	t = orderedtable(sb->b, sb->bc);
	j = sb->bc;
	while (sb->bc > 0)
	{
		if (sb->b[0] == t[sb->bc - 1])
			ft_pa(sa, sb, 0);
		else
		{
			if (bigs(sb->b, sb->bc, t[sb->bc - 1])
				> bige(sb->b, sb->bc, t[sb->bc - 1]))
				ft_rrb(sb, 0);
			else
				ft_rb(sb, 0);
		}
	}
}
