/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aer-razk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 17:58:35 by aer-razk          #+#    #+#             */
/*   Updated: 2022/04/01 17:58:37 by aer-razk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include<string.h>
# include<unistd.h>
# include<stdlib.h>
# include <string.h>
# include <stdio.h>

typedef struct stacka
{
	int	*a;
	int	ac;
}	t_stacka;
typedef struct stackb
{
	int	*b;
	int	bc;
}	t_stackb;
void	ft_sa(t_stacka *sa, int i);
void	ft_sb(t_stackb *sb, int i);
void	ft_ss(t_stacka *sa, t_stackb *sb, int i);
void	ft_pa(t_stacka *sa, t_stackb *sb, int i);
void	ft_pb(t_stacka *sa, t_stackb *sb, int i);
void	ft_ra(t_stacka *sa, int i);
void	ft_rb(t_stackb *sb, int i);
void	ft_rr(t_stacka *sa, t_stackb *sb, int isb);
void	ft_rra(t_stacka *sa, int i);
void	ft_rrb(t_stackb *sb, int i);
void	ft_rrr(t_stacka *sa, t_stackb *sb, int i);
int		ft_atoi(const char *str);
int		*orderedtable(int *a, int ac);
void	swapem(int *i, int *j);
void	threeless(t_stacka *sa);
void	*ft_preverse(int *ptr);
int		test_table(t_stacka *sa, int *t);
void	fiveless(t_stacka *sa, t_stackb *sb);
void	fivemore(t_stacka *sa, t_stackb *sb);
void	send_half(t_stacka *sa, t_stackb *sb);
void	send_max(t_stacka *sa, t_stackb *sb);
void	*ft_preversea(t_stacka *sa);
void	*ft_memcpy1(void *dest, const void *src, size_t n);
int		bige(int *a, int c, int k);
char	*ft_strjoin1(char *s1, char *s2);
char	**ft_split(char const *s, char c);
int		bigs(int *a, int c, int k);
void	*ft_free(char **c);
size_t	ft_strlen1(const char *s);
int		ft_strcmp(char *s1, char *s2);
int		*paramtester(char **arv, int arc, t_stacka *sa);
#endif
