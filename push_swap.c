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

int	main(int arc, char **arv)
{
	t_stacka	sa;
	t_stackb	sb;

	sb.bc = 0;
	sa.a = paramtester(arv, arc, &sa);
	if (sa.ac == 0)
		exit(0);
	if (sa.ac <= 3)
		threeless(&sa);
	else if (sa.ac > 3 && sa.ac <= 5)
		fiveless(&sa, &sb);
	else if (sa.ac > 5)
		fivemore(&sa, &sb);
}
