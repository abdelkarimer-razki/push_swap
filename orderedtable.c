/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   orderedtable.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aer-razk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 17:52:13 by aer-razk          #+#    #+#             */
/*   Updated: 2022/04/01 17:52:14 by aer-razk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swapem(int *i, int *j)
{
	int	c;

	c = *i;
	*i = *j;
	*j = c;
}

int	*orderedtable(t_stacka *sa)
{
	int	*t;
	int	i;
	int	j;

	i = -1;
	t = malloc(sa->ac * 4);
	while (++i < sa->ac)
		t[i] = sa->a[i];
	i = -1;
	while (++i < sa->ac - 1)
	{
		j = i;
		while (++j < sa->ac)
		{
			if (t[i] > t[j])
				swapem(&t[i], &t[j]);
		}
	}
	return (t);
}
