# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ali <ali@student.42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/21 21:36:53 by msariasl          #+#    #+#              #
#    Updated: 2022/11/29 22:33:32 by ali              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

debug:
	clear
	gcc get_next_line.c get_next_line_utils.c main.c
	./a.out

bonus:
	clear
	gcc get_next_line_bonus.c get_next_line_utils_bonus.c main.c
	./a.out
	
n:
	$(NORM)

lldb:
	gcc -g *.c