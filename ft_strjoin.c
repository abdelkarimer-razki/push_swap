/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aer-razk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 13:41:27 by aer-razk          #+#    #+#             */
/*   Updated: 2021/11/22 23:12:38 by aer-razk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

char	*ft_strjoin1(char *s1, char *s2)
{
	int		i;
	int		j;
	char	*s;

	if (!s1 || !s2)
		return (NULL);
	j = 0;
	i = ft_strlen1(s1) + ft_strlen1(s2);
	s = malloc(i + 1);
	if (!s)
		return (NULL);
	ft_memcpy1(s, s1, ft_strlen1(s1));
	ft_memcpy1(s + ft_strlen1(s1), s2, ft_strlen1(s2));
	s[i] = 0;
	free(s1);
	return (s);
}
