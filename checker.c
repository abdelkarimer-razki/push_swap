/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aer-razk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 03:21:12 by aer-razk          #+#    #+#             */
/*   Updated: 2022/04/09 03:21:13 by aer-razk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "./get_next_line/get_next_line.h"

void	exitit(void)
{
	write(2, "Error\n", 6);
	exit(0);
}

void	doinstruction(t_stacka *sa, t_stackb *sb, char *line)
{
	if (ft_strcmp("sa\n", line) == 0)
		ft_sa(sa, 1);
	else if (ft_strcmp("sb\n", line) == 0)
		ft_sb(sb, 1);
	else if (ft_strcmp("ss\n", line) == 0)
		ft_ss(sa, sb, 1);
	else if (ft_strcmp("pa\n", line) == 0)
		ft_pa(sa, sb, 1);
	else if (ft_strcmp("pb\n", line) == 0)
		ft_pb(sa, sb, 1);
	else if (ft_strcmp("ra\n", line) == 0)
		ft_ra(sa, 1);
	else if (ft_strcmp("rb\n", line) == 0)
		ft_rb(sb, 1);
	else if (ft_strcmp("rr\n", line) == 0)
		ft_rr(sa, sb, 1);
	else if (ft_strcmp("rra\n", line) == 0)
		ft_rra(sa, 1);
	else if (ft_strcmp("rrb\n", line) == 0)
		ft_rrb(sb, 1);
	else if (ft_strcmp("rrr\n", line) == 0)
		ft_rrr(sa, sb, 1);
	else
		exitit();
}

int	main(int arc, char **arv)
{
	t_stacka	sa;
	t_stackb	sb;
	int			*t;
	char		*line;

	sa.a = paramtester(arv, arc, &sa);
	t = orderedtable(sa.a, sa.ac);
	line = get_next_line(0);
	while (line)
	{
		if (line)
			doinstruction(&sa, &sb, line);
		free(line);
		line = get_next_line(0);
	}
	if (test_table(&sa, t) == 1 && sb.bc == 0)
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
}
