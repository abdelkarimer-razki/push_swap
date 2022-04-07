/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_table.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aer-razk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 18:31:52 by aer-razk          #+#    #+#             */
/*   Updated: 2022/04/02 18:31:53 by aer-razk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	test_table(t_stacka *sa, int *t)
{
	int	i;

	i = -1;
	while (++i < sa->ac - 1)
		if (sa->a[i] != t[i])
			return (0);
	return (1);
}

int	bigs(int *a, int c, int k)
{
	int	i;

	i = -1;
	while (++i < c)
		if (a[i] == k)
			return (i);
	return (-1);
}

int	bige(int *a, int c, int k)
{
	int	i;

	i = -1;
	while (++i < c)
		if (a[c - 1 - i] == k)
			return (i);
	return (-1);
}
