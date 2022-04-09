/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_p.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aer-razk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 17:50:42 by aer-razk          #+#    #+#             */
/*   Updated: 2022/04/01 17:50:44 by aer-razk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	*ft_realloca(t_stacka *sa, int size)
{
	int	*a;

	a = malloc(size);
	if (!a)
		return (NULL);
	ft_memcpy1(a, sa->a, sa->ac * 4);
	free(sa->a);
	return (a);
}

void	*ft_reallocb(t_stackb *sb, int size)
{
	int	*a;

	a = malloc(size);
	if (!a)
		return (NULL);
	ft_memcpy1(a, sb->b, sb->bc * 4);
	free(sb->b);
	return (a);
}

void	*ft_preverseb(t_stackb *sb)
{
	int	*a;

	sb->bc--;
	a = malloc(sb->bc * 4);
	if (!a)
		return (NULL);
	sb->b++;
	ft_memcpy1(a, sb->b, sb->bc * 4);
	sb->b--;
	free(sb->b);
	return (a);
}

void	ft_pa(t_stacka *sa, t_stackb *sb, int i)
{
	int	ac;

	if (sb->bc != 0)
	{
		ac = sa->ac;
		sa->a = ft_realloca(sa, (ac + 1) * 4);
		while (ac - 1 >= 0)
		{
			sa->a[ac] = sa->a[ac - 1];
			ac--;
		}
		sa->a[0] = sb->b[0];
		sa->ac++;
		sb->b = ft_preverseb(sb);
		if (i == 0)
			write(1, "pa\n", 3);
	}
}

void	ft_pb(t_stacka *sa, t_stackb *sb, int i)
{
	int	bc;

	if (sa->ac != 0)
	{
		bc = sb->bc;
		sb->b = ft_reallocb(sb, (bc + 1) * 4);
		while (bc - 1 >= 0)
		{
			sb->b[bc] = sb->b[bc - 1];
			bc--;
		}
		sb->b[0] = sa->a[0];
		sb->bc++;
		sa->a = ft_preversea(sa);
		if (i == 0)
			write(1, "pb\n", 3);
	}
}
