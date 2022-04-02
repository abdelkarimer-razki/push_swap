/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_s.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aer-razk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 17:52:41 by aer-razk          #+#    #+#             */
/*   Updated: 2022/04/01 17:52:43 by aer-razk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sa(t_stacka *sa)
{
	int	cmpt;

	cmpt = sa->a[0];
	sa->a[0] = sa->a[1];
	sa->a[1] = cmpt;
	write(1, "sa\n", 3);
}

void	ft_sb(t_stackb *sb)
{
	int	cmpt;

	cmpt = sb->b[0];
	sb->b[0] = sb->b[1];
	sb->b[1] = cmpt;
	write(1, "sb\n", 3);
}

void	ft_ss(t_stacka *sa, t_stackb *sb)
{
	ft_sa(sa);
	ft_sb(sb);
	write(1, "ss\n", 3);
}
