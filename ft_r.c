/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_r.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aer-razk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 17:50:55 by aer-razk          #+#    #+#             */
/*   Updated: 2022/04/01 17:50:57 by aer-razk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_ra(t_stacka *sa, int c)
{
	int	cmpt;
	int	i;

	if (sa->ac != 0)
	{
		cmpt = sa->a[0];
		i = 0;
		while (i + 1 < sa->ac)
		{
			sa->a[i] = sa->a[i + 1];
			i++;
		}
		sa->a[sa->ac - 1] = cmpt;
		if (c == 0)
			write(1, "ra\n", 3);
	}
}

void	ft_rb(t_stackb *sb, int c)
{
	int	cmpt;
	int	i;

	if (sb->bc != 0)
	{
		cmpt = sb->b[0];
		i = 0;
		while (i + 1 < sb->bc)
		{
			sb->b[i] = sb->b[i + 1];
			i++;
		}
		sb->b[sb->bc - 1] = cmpt;
		if (c == 0)
			write(1, "rb\n", 3);
	}
}

void	ft_rr(t_stacka *sa, t_stackb *sb, int i)
{
	ft_ra(sa, i);
	ft_rb(sb, i);
	if (i == 0)
		write(1, "rr\n", 3);
}

void	*ft_preversea(t_stacka *sa)
{
	int	*a;

	sa->ac--;
	a = malloc(sa->ac * 4);
	if (!a)
		return (NULL);
	sa->a++;
	ft_memcpy1(a, sa->a, sa->ac * 4);
	sa->a--;
	free(sa->a);
	return (a);
}
