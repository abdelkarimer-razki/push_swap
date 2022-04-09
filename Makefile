# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aer-razk <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/23 20:58:35 by aer-razk          #+#    #+#              #
#    Updated: 2021/11/23 21:34:02 by aer-razk         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

FILES = push_swap.c ft_atoi.c threeless.c orderedtable.c ft_rr.c ft_r.c ft_s.c\
		ft_p.c test_table.c send.c ft_memcpy.c ft_split.c ft_strjoin.c ft_strlen.c\
		parameter_tests.c

BFILES = checker.c get_next_line/get_next_line.c get_next_line/get_next_line_utils.c\
		ft_atoi.c threeless.c orderedtable.c ft_rr.c ft_r.c ft_s.c ft_p.c test_table.c\
		send.c ft_memcpy.c ft_split.c ft_strjoin.c ft_strlen.c parameter_tests.c ft_strcmp.c

INCLUDE = push_swap.h

CC = cc 

CFLAGS = -Wall -Wextra -Werror

OBJS = ${FILES:.c=.o}

BOBJS = ${BFILES:.c=.o}


all:$(NAME)

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) -I $(INCLUDE) -o $(NAME)
	@echo "SUUUUUUUUIIIIIII"

bonus: $(BOBJS)
	@$(CC) $(CFLAGS) $(BOBJS) -I $(INCLUDE) -o checker
	@echo "SUUUUUUUUIIIIIII"

%.o : %.c $(INCLUDE)
	gcc  $(CFLAGS) -o $@ -c $<

clean:
	@rm -f ${OBJS}
	@rm -f ${BOBJS}
	@echo "SUUUUUUUUIIIIIII"

fclean: clean
	@rm -f ${NAME}
	@rm -f checker
	@echo "SUUUUUUUUIIIIIII"

re: fclean all
