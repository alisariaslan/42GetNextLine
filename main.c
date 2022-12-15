/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msariasl <msariasl@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 13:12:29 by msariasl          #+#    #+#             */
/*   Updated: 2022/12/15 13:15:30 by msariasl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include "stdio.h"
#include "fcntl.h"

int main()
{
	int fd = open("za.txt",O_RDONLY,0777);
	char *str = get_next_line(fd);
	printf("\n%s\n",str);
}