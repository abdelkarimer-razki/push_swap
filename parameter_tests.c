/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parameter_tests.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aer-razk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 03:19:20 by aer-razk          #+#    #+#             */
/*   Updated: 2022/04/09 03:19:21 by aer-razk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	doubleintable(int *t, int ac)
{
	int	i;
	int	j;

	i = -1;
	while (++i < ac - 1)
	{
		j = i + 1;
		while (j < ac)
		{
			if (t[i] == t[j])
			{
				write(2, "error\n", 6);
				exit(0);
			}
			j++;
		}
	}
}

int	*fillint(char **arg, int ac)
{
	int	*t;
	int	i;

	t = malloc(4 * ac);
	if (!t)
		exit(0);
	i = -1;
	while (++i < ac)
		t[i] = ft_atoi(arg[i]);
	doubleintable(t, ac);
	ft_free(arg);
	return (t);
}

void	paramchecker(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
	{
		if ((str[i] == '-' || str[i] == '+') && (i == 0))
			i++;
		else if ((str[i] == '-' || str[i] == '+') && (i > 0))
		{
			write(2, "error\n", 6);
			exit(0);
		}
		if (str[i] > '9' || str[i] < '0')
		{
			write(2, "error\n", 6);
			exit(0);
		}
	}
	if (i == 0)
	{
		write(2, "error\n", 6);
		exit(0);
	}
}

int	*paramtester(char **arv, int arc, t_stacka *sa)
{
	int		i;
	char	*str;
	char	**argu;

	i = 0;
	str = malloc(1);
	if (!str)
		exit(0);
	str[0] = 0;
	while (++i < arc)
	{
		str = ft_strjoin1(str, arv[i]);
		str = ft_strjoin1(str, " ");
	}
	argu = ft_split(str, ' ');
	free(str);
	i = -1;
	while (argu[++i])
		paramchecker(argu[i]);
	sa->ac = i;
	return (fillint(argu, i));
}
