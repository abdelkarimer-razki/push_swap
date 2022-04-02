/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   threeless.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aer-razk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 17:52:22 by aer-razk          #+#    #+#             */
/*   Updated: 2022/04/01 17:52:24 by aer-razk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	search_in_table(t_stacka *sa, int *t, int n)
{
	int	i;

	i = -1;
	while (++i < sa->ac)
		if (sa->a[i] == t[n])
			break ;
	return (i);
}

void	threeless(t_stacka *sa)
{
	int	i;
	int	*t;

	t = orderedtable(sa);
	i = search_in_table(sa, t, sa->ac - 1);
	if (i < sa->ac / 2)
		ft_ra(sa);
	if (i >= sa->ac / 2 && i != sa->ac - 1)
		ft_rra(sa);
	if (sa->a[0] > sa->a[1])
		ft_sa(sa);
}

void	send_small_to_b(t_stacka *sa, t_stackb *sb, int i)
{
	if (i <= (sa->ac + 1) / 2)
	{
		while (i)
		{
			ft_ra(sa);
			i--;
		}
	}
	else if (i > (sa->ac + 1) / 2)
	{	
		while (i <= sa->ac - 1)
		{
			ft_rra(sa);
			i++;
		}
	}
	ft_pb(sa, sb);
}

void	fiveless(t_stacka *sa, t_stackb *sb)
{
	int	i;
	int	*t;

	t = orderedtable(sa);
	i = search_in_table(sa, t, 0);
	send_small_to_b(sa, sb, i);
	i = search_in_table(sa, t, 1);
	send_small_to_b(sa, sb, i);
	threeless(sa);
	ft_pa(sa, sb);
	ft_pa(sa, sb);
}

void	fivemore(t_stacka *sa, t_stackb *sb)
{
	int	i;
	int	*t;

	t = orderedtable(sa);
	if (sa->ac)
}
