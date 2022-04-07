/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aer-razk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 17:51:16 by aer-razk          #+#    #+#             */
/*   Updated: 2022/04/01 17:51:47 by aer-razk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	paramtester(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
	{
		if (str[i] == '-' || str[i] == '+')
			i++;
		if (str[i] > '9' || str[i] < '0')
		{
			write(1, "parameter error\n", 16);
			exit(0);
		}
	}
	if (i == 0)
	{
		write(1, "parameter error\n", 16);
		exit(0);
	}
}

int	main(int arc, char **arv)
{
	t_stacka	sa;
	t_stackb	sb;
	int			i;

	sa.a = malloc((arc - 1) * 4);
	sa.ac = arc - 1;
	sb.bc = 0;
	i = 0;
	while (i < sa.ac)
	{
		paramtester(arv[i + 1]);
		sa.a[i] = ft_atoi(arv[i + 1]);
		i++;
	}
	if (arc - 1 <= 3)
		threeless(&sa);
	else if (arc - 1 > 3 && arc - 1 <= 5)
		fivemore(&sa, &sb);
	else if (arc - 1 > 5)
		fivemore(&sa, &sb);
}
