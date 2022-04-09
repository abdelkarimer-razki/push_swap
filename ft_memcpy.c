/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aer-razk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 13:52:32 by aer-razk          #+#    #+#             */
/*   Updated: 2021/11/14 14:18:04 by aer-razk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	*ft_memcpy1(void *dest, const void *src, size_t n)
{
	char	*s;
	char	*d;

	s = (char *)dest;
	d = (char *)src;
	if (src != NULL || dest != NULL)
	{
		while (n--)
		{
			*s = *d;
			s++;
			d++;
		}
	}
	return (dest);
}
